const calculate_surface_gravity = (mass, radius) => 
{
  let G = 6.6743 * Math.pow(10, 11),
    M = parseFloat(mass) || 0, 
    r = parseFloat(radius) || 0, 
    a = typeof M !== 'number' || typeof r !== 'number'
      ? null : parseFloat((G * M) / Math.pow(r, 2))
  return a || -1
}



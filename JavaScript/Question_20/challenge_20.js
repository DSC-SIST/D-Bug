function hitPrince(Vo, th, Yo, Ds){ // velocity, angle, height, dist
    th*= (Math.PI / 180.0);            // convert to radians
    let Ge = parseFloat(9.81);         // acceleration of gravity -- meters/sec/sec
    let Vx = Vo * Math.cos(th);        // init horizontal velocity
    let Vy = Vo * Math.sin(th);        // init vertical velocity
    let hgt ; // max height(missing)

    let upt = Vy/Ge;                    // time to max height
    let dnt = Math.sqrt(2 * hgt/Ge);    // time from max height to impact
    let rng ;        // horizontal range at impact

    return Math.abs(rng - Ds) < 0.5;
}
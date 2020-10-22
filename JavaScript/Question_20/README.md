Question:
Prince of Persia Turned Around
You're working for Jaffar in the newest game of Prince of Persia. The prince is coming to get the princess and you have to stop him. He's entering the castle on a horse, don't ask me why he's riding a horse... he just is!
You're standing next to the cannon and you have to check if the aim / velocity / height is ok for hitting the prince on his horse.
Your function will get four values / circumstances:
Velocity
Angle
Height
Distance to the prince
With the formula of Ballistic Trajectory you'll be able to calculate the distance the cannonball is gonna travel for impact. You don't need to apply rounding.
The complete formula is found in the Resources section. Computations are based on the acceleration of gravity on the earth's surface (9.81 m/s/s), atmospheric drag is neglected. The chance of hitting the prince / his horse is plus or minus 0.5m.

Difficulty Level : Hard 

output:
hitPrince(10, 10, 10, 16) ➞ true

hitPrince(20, 45, 0, 45) ➞ false

hitPrince(5, 45, 10, 6) ➞ true
Ballistic Trajectory
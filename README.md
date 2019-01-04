![Banner Icon made by Freepik from www.flaticon.com ](https://github.com/jonathanrjpereira/Space-Bar/blob/master/img/Banner.svg)

Space Bar is a physical notification display which is triggered when a certain event occurs in Outer Space. It is an IoT project which uses @IFTTT's Space service to control the state of a @particle-iot Photon's I/O pins.

## Notifications

 -  **Astronaut** - Get a notification whenever an Astronaut enters space.
 -  **Mars** - Get a notification when the Season changes on Mars.
 -  **International Space Station(ISS)** - Get a notification when the ISS passes over your house. The ISS completes 15.5 orbits per day.

## Prerequisites
**Hardware:**
1. [Particle Photon](https://amzn.to/2C3PWPp)
2. [White LED's](https://amzn.to/2R7nhn6)

**Software:**
1. Web IDE to flash the Photon. [Particle Web IDE](https://build.particle.io/)
2. IFTTT [Space Service](https://ifttt.com/space)

## Working
After successfully flashing the program onto the [Particle Photon](https://amzn.to/2C3PWPp), you will need to create three new applets using the IFTTT space service. For each applet choose the 'This' service as 'Space' and the 'That' service as 'Particle'.

For each Space trigger select either "Astronaut enters space", "Season changes on Mars" or "ISS passes over a specific location". Remember to choose a location for the third trigger.

For each Particle action select "Call a function". Then for each of applet choose a different 'Function Name' from either "astronaut", "mars" or "iss" and then click Finish.

Connect the [White LED's](https://amzn.to/2R7nhn6) as given in the circuit schematic & you're done!

## Contributing

Are you a programmer, engineer or hobbyist who has a great idea for a new feature in this project? Maybe you have a good idea for a bug fix? Feel free to grab our code & schematics from Github and tinker with it. Don't forget to smash those ⭐️ & Pull Request buttons. [Contributor List](https://github.com/jonathanrjpereira/Space-Bar/graphs/contributors)

Made with ❤️ by [Jonathan Pereira](https://github.com/jonathanrjpereira)

Banner Logo is Designed by [Freepik](https://www.freepik.com/) from [www.flaticon.com](www.flaticon.com)

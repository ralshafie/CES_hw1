# ESP32 Display of "Careless Whisper" by George Michael

This installation displays a chorus from the song “Careless Whisper” by George Michael, a song that my sister has sung repeatedly over winter break. Careless Whisper is a breakup song a man sings to a woman after his own betrayal of her. And so as my sister had an earlier return date to school, she sang this song repeatedly, asking who is going to “dance with me?”. Despite that being dramatic, this is a testament to our partnership and our forever dances. Regardless of how the “music seems so loud”, or how long this song was stuck in my head, she’ll always feel the need to sing to me.


To run this program on your ESP32, download the file and click on the arrow —> icon at the top left corner. The program should compile and run immediately barring any errors that may occur regarding the set-up of the ESP32 in the Arduino IDE. Ensure that you have the correct port selected.


## The code

There are about 3 main sections to the code for this exhibition:

- The first section is dedicated to defining global variables, shortcuts, and invoking certain libraries
- `void setup(void)`
    - Initializes the program and sets the orientation how i wanted it to be (vertically)
- `void loop()`
    - This is the main body of the code. It controls the words on the screen, the colors, and the timing between the changing in screens.


We used soldering techniques to create an electrical connection between our ESP32 devices and the batteries we were given. This is to power our ESP32’s wirelessly for the art installation. Be sure that your battery is fully charged before a wireless installation by connecting the device to the battery while also connecting the device to a laptop or other power source. 

<img src="https://user-images.githubusercontent.com/67122420/154197793-b28af18e-1103-4ec2-80d0-31c16a99c762.jpeg" width = 300 heighht = 30>

I soldered the wires of the battery to the connection wires that came with the ESP32, connecting the negative and positive ones together. Beware not to fray the tips of the wire too much if you strip the protector, as soldering over it will not fix the connection and the battery will not power. Additionally, check if the battery works before you melt the heat shrinks as to avoid more material to break through when repeating the soldering

The final product takes this form:

<img src="https://user-images.githubusercontent.com/67122420/154198227-d2a62495-65ed-44d3-85b7-c1d29c736a3e.jpeg" width=300 height=400>


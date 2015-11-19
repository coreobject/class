# **PUDT 2101**
Course: CORE LAB: Objects | Creative Technology
_Co-Requisites: Core Studio: Creative Technology_
Fall 2015
Tuesday 3:50 - 6:30, 6 East 16th Street 1205
Thursday 3:50 - 6:30, 6 East 16th Street 1109
*Ariel Churi*
_churia@newschool.edu_
Office hours by appointment

Wc edit

## COURSE DESCRIPTION [description]
This course serves as a complement to Core Studio: DT1 ­ Objects | Creative Technology. The assignments are built to work in tandem, support and supplement the projects students are developing in the studio class. The lab is designed around a series of learning workshops that teach beginning and intermediate interaction design and code fundamentals through a hands­on engagement with physical computing, hardware, and data collection/representation tools. These workshops include soldering, reading and building schematics, using and making sensors, prototyping using a breadboard, and creating and customizing PCBs.

## THEMES [themes]
+  Input/Output ­ Same data input, various medium output
+  Dynamic Interfaces ­ Interface as the message
    +  Data standards, storage and representations
+  Sketching (with pencil and with code)
    +  Prototyping & Making
    +  Iteration
    +  Research

## COURSE OUTLINE [outline]
### Interactive Projects

+ Overview

### Electronics

+ Circuits
+ resistors
+ Volts amps ohms
+ Breadboard
+ Digital / analog
+ Voltage divider
+ Multimeter
+ Oscilloscope

### Arduino

+ Development environment
+ Coding and pseudo code.
+ Arduino Pins
+ Digital out
    + Blink an LED
    + with and without delay
+ Digital in
    + Button circuit
    + Button code - Turn an LED on.
        + Press a button to turn on an LED and press it again to turn it off.
    + Pulse Width Modulation
        + Fade an LED up and down
        + Rainbow fade an RGB led
+ Analog in
    + With voltage divider
    + Resistive sensor circuit
    + Logging data
    + Mapping values
+ Using libraries
    + Capacitive Touch Sensor

### PCB design and soldering
+ PCB layout software
    + [CadSoft EAGLE PCB Design Software|Support, Shop, Tutorials] (http://www.cadsoft.de/)
    + [gEDA roject’s Homepage] (http://www.geda-project.org/)
    + [Fritg Fritzing] (http://fritzing.org/home/)
+ Create a simple PCB: Breadboardable RGB LED

    Parts:

    + RGB LED
    + 3 Resistors
    + Headers

## LEARNING OUTCOMES [outcomes]

**By the end of the semester, students will be able to:**

1. Apply skills in physical computing and coding fundamentals
2. Apply skills in data collection and visualization
3. Apply skills in repurposing hardware and software
4. UNDERSTAND the meaning of hardware/software and their relationships
5. Build a final interactive project that integrates varying medium and sensory themes of the class towards their own creative practice.

## DETAILED SCHEDULE [schedule]

### 01-1 09/01 [01]

 + Introductions / class overview
 + Overview of interactive projects
 + Class BOM
 + Learning portfolio
 + Assignment
 + update your canvas profile with your photo and a link to your learning portfolio blog

**Assignment:**

+ update your canvas profile with your photo and a link to your learning portfolio blog
+ Create a blog post introducing yourself

### 01-2: 09/03

**Subject:** *Electronics*

+ What is electricity
+ [123D circuits] (https://123d.circuits.io/)
+ Voltage divider
+ Using a multimeter

**Assignment:**

+ LED circuit
+ Photoresistor in series with LED circuit
+ Potentiometer in series with LED circuit
+ Post about a cool Arduino project (repeat every week)

### 02-1: 09/08 [02]

**Bring materials and tools to class**

+ Digital / Analog
+ Oscilloscope
+ Dark detector circuit
+ Water detector circuit

**Assignment:**
Choose and create a 555/556 timer circuit:

+ LED flasher
+ Touch switch
+ Noise maker
+ Siren
+ Atari Punk Console

### 02-2: 09/10

**Subject:** *Arduino*

+ Setting up your Arduino
+ Transistors, bytes, and registers
+ Bitwise functions and binary
+ The Arduino development environment
+ Digital out
+ Blink an LED
+ Change the blink pattern
+ Variables
+ The serial port
+ Debugging
+ IF statement

**Assignment:**
Create a blink pattern without using the _delay()_ command

+ Use _variables_ and _IF_ statements to blink the LED.
+ Connect a second _LED driver_ circuit to _PIN 12_.
+ Create a program which blinks both LEDs.
    + LED 13 blinks steady.
    + LED 12 blinks in a pattern like _SOS_ or _Shave and a Haircut_.

### 03-1: 09/15 [03]

+ Arduino pins
+ Digital in
+ Button circuit
+ Momentary button turns on LED
+ Button toggles LED on/off

**Assignment:**
Press once to turn LED on, again to to turn it off.
This should not work the first time. What are the steps involved in making this happen. Then, what are the steps involved in figuring out what the problem i?
Two LEDs. One blinks in a steady pattern. The other toggles on/off with a button.

### 03-2: 09/17

+ Analog out - _Pulse Width Modulation_
+ Fade an LED
+ Counting variables
+ Analog in

**Assingment:**
With the code and circuit we have built so far choose behavior(s) you would like to program. Choose a relatively complex behavior and a much simpler version(s) of it. Write your choices at the top of your blog post. Do not change them after you begin.

Examples:

+ LED turns on in the dark and off on the light.
	+ It could fade on and off
	+ it could stay on for a minute in the day and then turn off until the next time it light and then dark again.
+  The button could start a timer which makes the LED blink 10 times when it goes off.
	+  you could set the time with the pot
+ LED turns on in the dark but how dark is determined by the knob.
+ Fade LED based on knob position
	+ if it goes all the way up, the other LED blinks 3 times.
+ LED fades up and down but max brightness is determined by the knob

The _Map()_ function may be helpful.

**Read the Arduino reference**

**Read getting started with arduino**

### 04-1: _NO CLASS_ [04]

### 04-2: 09/24

+ Analog in

**Assignment:**

+ Add pins to the LED meter. [coreobject/ledmeter] (https://github.com/coreobject/ledmeter)
+ For Loops and Arrays of LEDs. [coreobject/pwm-array] (https://github.com/coreobject/pwm-array)

### 05-1: 09/29 [05]

**Laser Cutter Lab Orientation.**

+ Introducing the Emerging Object Night Light
+ Designing behavior


### 05-2: 10/01

+ State Machine
+ Complex behavior
+ Feedback

### 06-1: 10/06 [06]

Using libraries and the CapSense library.
Creating functions and organizing your code.
Creating you file for laser cutting.

**Assignment:**
1. Begin your behavior diagram
2. Get Emerging Object Parts
3. Create your file

### 06-2: 10/08


**Assignment:**
Cut your acrylic

### 07-1: 10/13 [07]

Fabrication session

**Assignment:**
Glue your acrylic

### 07-2: 10/15

User testing

### 08-1: 10/20 [08]

 Work session

### 08-2: 10/22

**DUE: EMERGING OBJECT NIGHTLIGHT** // Changed to 10/29

+ Review Sketchup
+ Assign _Peripheral Device Research Project_ subject matter
+ Review night lights
+ Review night light code

**Assignment:**
+ Begin _Peripheral Device Research Project_
+ Blog update on night light progress

### 09-1: 10/27 [09]

**DUE: EMERGING OBJECT NIGHTLIGHT**
    Demo in class. Blog post in a week.

Begin: Mini Virtual Pet Project

### 09-2: 10/29

Soldering workshop.
    Build your own Arduino on a perfboard.
    File: _buildYourOwnArduino.markdown

### 10-1: 11/03 [10]

Peripheral device working session

**Due: EMERGING OBJECT NIGHT LIGHT BLOG POST**

+ Arithmetic Operators
+ Comparison Operators
+ Boolean Operators

### 10-2: 11/05

_Mini Virtual Pet_ working session
Due: Working circuit on a solderless breadboard

### 11-1: 11/10 [11]

_Mini Virtual Pet_ working session

### 11-2: 11/12


### 12-1: 11/17 [12]

**DUE: @6:00 Mini Virtual Pet**
Give your pet to a classmate with written instructions and observe.

Introducing _Tamagotchi II +alpha_

**ASSIGNMENT:**

+ Design your virtual pet blog post. Due 12/1
+ Build your virtual pet circuit on a broadboard

### 12-2: 11/19

Managing the big project

Overview of _Tamagotchi II +alpha_

+ Supplies

**Assignment:**
Design your virtual pet
Turning your circuit into printed circuit board.

**Assignment:**
Prototype your circuit

### 13-1: 12/01 [13]

Work Session:
_Peripheral Device Research_
_Tamagotchi_

Demo:
Printed Circuit Board

Due:
Design your Object
Create a Bill of Materials
### 13-2: 12/03

**DUE: Peripheral Device Research**

### 14-1: 12/08 [14]

PCB creation

**Assignment:**
Populate your PCB

### 14-2: 12/10

Work session

### 15-1: 12/15 [15]

Work session

### 15-2: 12/17

Work session

### 16: 12/22 [16]

DUE: TAMAGOTCHI II +ALPHA

***
## DELIVERABLES [deliverables]

1. A variety of exercises or short-term project outcomes
2. Major projects align with Studio DT1: Object | Creative Technology

All assignments must be documented on your learning portfolio. If no deliverable is specifically requested, turn in a link to your post on canvas.

## PROJECTS [projects]
### Project 1: Emerging Object Interactive Night Light

[Emerging Objects | Flickr - Photo Sharing!] (https://www.flickr.com/photos/sparkle_labs/albums/72157633249013685)

**Description:**
Students will create a night light that has a standard form and input/output. Based on an Arduino and a mini solder less breadboard.

**Form:**
3”x3”x3” cube laser cut acrylic

**Input:**

+ Capacitive touch sensor [Arduino Playground - InterfacingWithHardware] (http://playground.arduino.cc/Main/InterfacingWithHardware#capsens)
+ Light Sensor

**Output:** 1-6 LEDs

**Parts List:**

1. 10kΩ
2. 1MΩ
3. Resistors for LEDs. ~100Ω - 220Ω
4. Mini Breadboard
5. Arduino UNO
6. LEDs
7. Photoresistor
8. Length of wire (22 gauge) for capacitive touch sensor
9. Acrylic to create enclosure
8. Acrylic cement and applicator

![minibreadboard](minibreadboard.jpg)
![image] (acryliccement.jpg)

### [Canceled] Project 2: Toy Autopsy Report // This project may be canceled.

Purchase a toy and generate an autopsy report. What is in it? How does it work?

### Project 2: MINI VIRTUAL PET

Create a small Arduino project that is a version of a virtual pet.
This assignment is open to interpretation but the final form will be a homemade Arduino and some additional components soldered on to a perfboard.

See the file _buildYourOwnArdino.markdown_ [class/buildYourOwnArduino.markdown at master · coreobject/class] (https://github.com/coreobject/class/blob/master/buildYourOwnArduino.markdown)

Process outline:

+ choose the inputs (buttons, sensors) and output (led, lcd, speaker).
+ outline the behavior.
+ sketch the circuit.
+ create a blog post showing your work so far.
+ create a prototype on a solderless breadboard.
+ solder the completed circuit onto a perfboard.
+ demo the behavior for the class.
+ create a blog post.

### Project 3: Peripheral Device Research

In teams of two, choose a peripheral device or advanced topic and create instructions on its use for your fellow class members.

Suggestions:

1. 8x8 LED matrix and Max7219/7221 LED driver [Arduino Playground - MAX72XXHardware] (http://playground.arduino.cc/Main/MAX72XXHardware)
2. LCD Display
3. ISD 1416P Sound Chip [ISD1416P Nuvoton Technology Corporation of America | ISD1416P-ND | DigiKey] (http://www.digikey.com/product-detail/en/ISD1416P/ISD1416P-ND/251550)
4. [VoiceShield] (http://www.spikenzielabs.com/Catalog/index.php?main_page=product_info&cPath=27&products_id=172) or
5. [Adafruit Wave Shield for Arduino Kit] (http://www.adafruit.com/products/94)
6. Piezo knock sensor
7. Listen to and repeat a pattern of knocks.
8. 5x7 LED matrix and row/column scanning
9. Advanced Arduino programming topics (pattern recognition?)
10. Play music with a speaker
11. Building and programming an Arduino on a breadboard
12. Bluetooth for Arduino
13. [Adafruit Bluefruit LE Micro - Bluetooth Lo Energy + ATmega32u4] (http://www.adafruit.com/products/2661)
14. [Adafruit Bluefruit LE SPI Friend - Bluetooth Low Energy (BLE)] (https://www.adafruit.com/product/2633)
15. Real Time Clock IC
16. MM74HC595N 8-bit shift register [MM74HC595N Fairchild Semiconductor | Mouser] (http://www.mouser.com/ProductDetail/Fairchild-Semiconductor/MM74HC595N
17. SN7404N Hex Inverter [SN7404N Texas Instruments | Mouser] (http://www.mouser.com/ProductDetail/Texas-Instruments/SN7404N/?qs=0le1rQK8zxrjs7v1lwXIdQ%3D%3D)



### Project 4: Tamagotchi II +ALPHA virtual pet

Create a version of a virtual pet. It should use only material that was covered in class and be able to fit in to a 9” cube.

#### Process

**Design your object**
+ Physical form
+ Interaction
+ Circuit

**Create you Bill of Materials**
A list of all of the parts you will need for the form and the circuit. Links to where they can be sourced and the datasheet.

**Aquire parts**
We will setup a class buy but you will need to be ready.

**Prototype the circuit on a solderless breadboard**

**User test**

**Layout your pcb using eagle/illustrator**

**Burn, drill, and solder your PCB**

**Create your enclosure**

**User test**


## BILL OF MATERIALS (BOM) [bom]

+ Solderless breadboard
+ 5V power supply
    + 4AA battery pack
    + 5V power brick and breadboard adapter
    + Your arduino can be used as a power supply but you will need to have it plugged in to your computer or a phone charger.
+ Hook up wire (22 guage)
+ pre-cut jumper wire (can use the hook up wire)
+ Alligator clips
+ LEDs
+ RGB LED
+ Photoresistor (2)
+ Potentiometers (2)
+ Buttons
+ 2n2222 Transistor
+ Resistors (100Ω, 220Ω, 10kΩ are most popular)
+ Capacitors
+ 555 (2) or 556 (1) IC timer chip
+ Arduino
+ A-B USB cable
+ headers
+ Blank PCB
+ Safety glasses
+ Solder (if not provided by school)
+ & more for your projects

### KIT SUPPLIERS

These are some interesting kits. Most of them will require you to order extra parts seperately. We can set up group buys on other parts we need.

+ [Make:it Deluxe Electronics Tool Kit] (http://www.makershed.com/products/make-it-deluxe-electronics-tool-kit)
+ [Getting Started with Arduino Kit v3.0] (http://www.makershed.com/products/getting-started-with-arduino-kit-v3-0)
+ [Adafruit ARDX - v1.3 Experimentation Kit for Arduino (Uno R3) [v1.3] ID: 170 - $85.00 : Adafruit Industries, Unique & fun DIY electronics and kits] (http://www.adafruit.com/products/170)
+ [Arduino Starter Kit from Arduino.cc ID: 1078 - $124.95 : Adafruit Industries, Unique & fun DIY electronics and kits] (http:/www.adafruit.com/products/1078)
+ [Amazon.com: SunFounder New Uno R3 Project Super Starter Kit For Arduino UNO R3 Mega2560 Mega328 Nano: Computers & Accessories] (http://www.amazon.com/SunFounder-Project-Starter-Arduino-Mega2560/dp/B00D9NQDAG/ref=sr_1_5?s=pc&ie=UTF8&qid=1441203666&sr=1-5&keywords=arduino+starter+kit) This uses a clone but is pretty cheap for all you get.
+ [Amazon.com: Gikfun Electronics fans Parts Component Starter Kit For Arduino EK8390_: Computers & Accessories] (http://www.amazon.com/Gikfun-Electronics-Component-Starter-Arduino/dp/B00XMS1UM4/ref=sr_1_8?s=pc&ie=UTF8&qid=1441206709&sr=1-8&keywords=electronics+starter+kit)
+ [Sparkle Labs] (http://sparklelabs.com/index_store.php)

### PARTS SUPPLIERS

+ [Electonix Express  RSR Elecronics Inc - Electronic Parts & Components Distributor | RSR Electronix Express] (http://www.elexp.com/)

## RESOURCES [resources]

Class Blog: [Learning Portfolio](http://portfolio.newschool.edu/corelabobject/)

+ [123D Circuits] (https:/123d.circuits.io/)
+ [learnSarkle | Sparkle Labs Virtual Hacker Space] (http://learn.sparklelabs.com/)
+ [Arduino - Hoe] (https://www.arduino.cc/)
+ [Arduino - Refrence] (https://www.arduino.cc/en/Reference/HomePage)

## ASSESSMENT CRITERIA [assessment]

| --------------------------------  | --- |
| Attendance & Class Participation  | 20% |
| Sketching & Prototyping           | 20% |
| Designing with physical computing | 30% |
| Designing for user experience     | 30% |

## GRADE DESCRIPTIONS [grade]

**A  [4.0; 96–100%]:**
Work of exceptional quality, which often goes beyond the stated goals of the course


**A- [3.7; 91 –95%]:**
Work of very high quality

**B+ [3.3; 86–90%]:**
Work of high quality that indicates substantially higher than average abilities

**B  [3.0; 81–85%]:**
Very good work that satisfies the goals of the course

**B- [2.7; 76–80%]:**
Good work

**C+ [2.3; 71–75%]:**
Above-average work

**C  [2.0; 66–70%]:**
Average work that indicates an understanding of the course material; passable
Satisfactory completion of a course is considered to be a grade of C or higher.

**C- [1.7; 61–65%]:**
Passing work but below good academic standing

**D  [1.0; 46–60%]:**
Below-average work that indicates a student does not fully understand the assignments;
Probation level though passing for credit

**F  [0.0; 0–45%]:**
Failure, no credit

**Grade of W:**
The grade of W may be issued by the Office of the Registrar to a student who officially withdraws from a course within the applicable deadline. There is no academic penalty, but the grade will appear on the student transcript. A grade of W may also be issued by an instructor to a graduate student (except at Parsons and Mannes) who has not completed course requirements nor arranged for an Incomplete.

**Grade of WF:**
The grade of WF is issued by an instructor to a student (all undergraduates and all graduate students) who has not attended or not completed all required work in a course but did not officially withdraw before the withdrawal deadline. It differs from an “F,” which would indicate that the student technically completed requirements but that the level of work did not qualify for a passing grade. The WF is equivalent to an F in calculating the grade point average (zero grade points), and no credit is awarded.

**Grades of Incomplete:**
The grade of I, or temporary incomplete, may be granted to a student under unusual and extenuating circumstances, such as when the student’s academic life is interrupted by a medical or personal emergency. This mark is not given automatically but only upon the student’s request and at the discretion of the instructor. A Request for Incomplete form must be completed and signed by student and instructor. The time allowed for completion of the work and removal of the “I” mark will be set by the instructor with the following limitations:

**Undergraduate students:**
Work must be completed no later than the seventh week of the following fall semester for spring or summer term incompletes and no later than the seventh week of the following spring semester for fall term incompletes. Grades of “I” not revised in the prescribed time will be recorded as a final grade of “WF” by the Office of the Registrar.

## DIVISIONAL, PROGRAM AND CLASS POLICIES [policies]

**Responsibility:**
Students are responsible for all assignments, even if they are absent.  Late assignments, failure to complete the assignments for class discussion and/or critique, and lack of preparedness for in-class discussions, presentations and/or critiques will jeopardize your successful completion of this course.

**Participation:**
Class participation is an essential part of class and includes: keeping up with reading, assignments, projects, contributing meaningfully to class discussions, active participation in group work, and coming to class regularly and on time.

**Attendance:**
Faculty members may fail any student who is absent for a significant portion of class time. A significant portion of class time is defined as three absences for classes that meet once per week and four absences for classes that meet two or more times per week. During intensive summer sessions a significant portion of class time is defined as two absences. Lateness or early departure from class may also translate into one full absence.

**Canvas:**
Use of Canvas may be an important resource for this class. Students should check it for announcements before coming to class each week.

**Delays:**
In rare instances, I may be delayed arriving to class.  If I have not arrived by the time class is scheduled to start, you must wait a minimum of thirty minutes for my arrival.  In the event that I will miss class entirely, a sign will be posted at the classroom indicating your assignment for the next class meeting.

**Electronic Devices:**
Use of electronic devices (phones, tablets, laptops) is permitted when the device is being used in relation to the course's work. All other uses are prohibited in the classroom and devices should be turned off before class starts.

**Academic Honesty and Integrity:**
The New School views “academic honesty and integrity” as the duty of every member of an academic community to claim authorship for his or her own work and only for that work, and to recognize the contributions of others accurately and completely. This obligation is fundamental to the integrity of intellectual debate, and creative and academic pursuits. Academic honesty and integrity includes accurate use of quotations, as well as appropriate and explicit citation of sources in instances of paraphrasing and describing ideas, or reporting on research findings or any aspect of the work of others (including that of faculty members and other students). Academic dishonesty results from infractions of this “accurate use”. The standards of academic honesty and integrity, and citation of sources, apply to all forms of academic work, including submissions of drafts of final papers or projects. All members of the University community are expected to conduct themselves in accord with the standards of academic honesty and integrity. Please see the complete policy in the Parsons Catalog.

It is the responsibility of students to learn the procedures specific to their discipline for correctly and appropriately differentiating their own work from that of others.  Compromising your academic integrity may lead to serious consequences, including (but not limited to) one or more of the following: failure of the assignment, failure of the course, academic warning, disciplinary probation, suspension from the university, or dismissal from the university.

**Student Disability Services (SDS):**
In keeping with the University’s policy of providing equal access for students with disabilities, any student with a disability who needs academic accommodations is welcome to meet with me privately.  All conversations will be kept confidential.  Students requesting any accommodations will also need to meet with Jason Luchs in the Office of Student Disability Services, who will conduct an intake, and if appropriate, provide an academic accommodation notification letter to you to bring to me.  SDS assists students with disabilities in need of academic and programmatic accommodations as required by the Americans with Disabilities Act of 1990 (ADA) and Section 504 of the Federal Rehabilitation Act of 1973. http://www.newschool.edu/studentservices/disability/.

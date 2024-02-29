# Filmify
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \<[Mustafa Hassan](https://github.com/mhass027)\
\<[Jahanbir Mann](https://github.com/jmann028)\
\<[Iliyan Alibhai](https://github.com/ialib001)\>
>

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include:
 > * Why is it important or interesting to you?
   
   -  As developers, Filmify is important to us as we want to eliminate the idea of people being indecisvive of what movie they want to watch. A lot of the times people will be with their significant other or a group of their friends and have no clue on what movie to pick. Our project saves time for user's by picking out a movie to watch based on the user or groups interests.
     
  What languages/tools/technologies do you plan to use? (This list may change over the course of the project)  
  
  -  As of right now, we are most likely going to use a C++ backend. We want to implement a userface but are still trying to figure out what is the best technology to use. We most likely will use the std vector library to store a large vector of movies of different genres.

 What will be the input/output of your project?

 -  The input will be different settings of what the user's choice of movie genre is. Other inputs can be how long of a duration of a movie they are willing to watch. Input can also be a user's request on what movies they have already watched. The output will be the reccomended movie based on the user's interests. The output can also be movies the user has already watched as well
  
 What are the features that the project provides?
 - The project will reccomend movies based on users' preferences on genere, duration, interests, and group settings or number of people watching the movie.  We also want to add a feature that stores movies that users have already watched. A user can provide a name of a movie that he/she likes and the application can recommend a list of movies that the user might like.
 
 > You also need to set up an empty project board using GitHub projects (board view with default columns). Make sure you add the board under your project repository. You should also have a Product Backlog and In testing columns added. All columns should be in the right order.
 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column (aka Sprint Backlog).
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. Both time slots should be during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.
> 
![IMG_0441](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/147021240/94c34b97-e647-4cba-bf79-c2827c0783a5)

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs and expected output, or any graphical user interface components if applicable (e.g. buttons, text boxes, etc). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.
>
>
> ![CS111 Notebook-152](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/147021240/f6ea6d0e-4f50-4d7e-bab6-1ef86726737f)


## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
![UML Diagram CS100 Final Project Phase 3](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/143841150/376ff4d7-c701-41ff-b361-d80d9079deeb)

  
Description:
Our UML diagram has 4 classes, those being InputOutput, OutputVector, UserData, and Movie. The first InputOutput class gets the user specifications and has accesor functions such userOption(), where the user can input their desired duration, genre, and actor. The userData class communicates with the where we can create a userData object that has all the user's specifications. Our Movie Class consists of private variables such as vectors reccomendedMovies(). We also have the listOfMovies vector which will probably be of type 'long long'. We also have functions where we can generate movies based on actor, and duration


 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
------------------------------------------------------------------------------------
> SOLID Principles Explanation: 
Our UML Diagram follows SOLID principles but does not use all of the principles, as our program does not require certain implementations that require specific principles. The principles that our program follows and requires include: Single responsibility principle, Interface segregation principle, and the open closed principle. Firstly, our UML Diagram strictly follows the SRP because for each functionality of our program, we have a specific class; for example:Each class in the diagram seems to have a specific responsibility. For example, the Movie class is responsible for movie-related data, the InputOutput class handles user input and output operations, and the MovieDataSet class is responsible for generating a list of movies and our MovieMethods class focuses on sorting each film by its attributes such as rating and duration, This suggests the SRP is being followed.
Open-closed principle: An example of us adopting the Open-Closed-Principle would be our MovieMethods class, specifically, our SortByName() and SortByRating(). We can extend the logic for these methods without having to modify the existing code.
Using both these principles positively impacts our program by keeping it cleaner and less prone to bugs and errors. When following the SRP, our code is neater as we as the developers know exactly which class is created to perform which function, rather than all functionalities being compressed into one large class. When following the OCP it prevents the likelihood of bugs in our code when developing sort methods because we don’t have to change the code for any of methods, since they are open for any object to us
---------------------------------------------------------------------------------------
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 

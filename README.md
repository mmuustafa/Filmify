# Filmify
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \<[Mustafa Hassan](https://github.com/mhass027)\
\<[Jahanbir Mann](https://github.com/jmann028)\
> \<[Adharsh Prathap](https://github.com/adrsh-prthpp)\
\<[Iliyan Alibhai](https://github.com/ialib001)\>
>

## Project Description
   
   -  As developers, Filmify is important to us as we want to eliminate the idea of people being indecisvive of what movie they want to watch. A lot of the times people will be with their significant other or a group of their friends and have no clue on what movie to pick. Our project saves time for user's by picking out a movie to watch based on the user or groups interests.
     
  What languages/tools/technologies do you plan to use? (This list may change over the course of the project)  
  
  -  As of right now, we are most likely going to use a C++ backend. We want to implement a userface but are still trying to figure out what is the best technology to use. We most likely will use the std vector library to store a large vector of movies of different genres.

 What will be the input/output of your project?

 -  The input will be different settings of what the user's choice of movie genre is. Other inputs can be how long of a duration of a movie they are willing to watch. Input can also be a user's request on what movies they have already watched. The output will be the reccomended movie based on the user's interests. The output can also be movies the user has already watched as well
  
 What are the features that the project provides?
 - The project will reccomend movies based on users' preferences on genere, duration, interests, and group settings or number of people watching the movie.  We also want to add a feature that stores movies that users have already watched. A user can provide a name of a movie that he/she likes and the application can recommend a list of movies that the user might like.
 
 
 > ## Phase II
## User Interface Specification

### Navigation Diagram

![IMG_C2BDD3484027-1](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/147021240/4ca6db23-f167-4058-92f1-20832ed7269c)


### Screen Layouts

> ![CS111 Notebook-152](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/147021240/f6ea6d0e-4f50-4d7e-bab6-1ef86726737f)


## Class Diagram

![UML Diagram CS100 Final Project Phase 3-3](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/143841150/a00e4dec-ef15-4728-b685-f0c344229214)


  
Description:
Movie Class: This class serves as a blueprint for movie objects within the system. Each Movie object has attributes such as name, genre, director, and rating. These attributes are used to store information about a movie. The class provides accessor (get) and mutator (set) methods for each attribute, enabling other parts of the system to retrieve or modify movie details.

InputOutput Class: The InputOutput class is the user interface component of the system. It is responsible for all interactions with the user. This includes displaying lists of movies and various messages, as well as collecting user input for recommendations based on different criteria such as actor, genre, or director. It likely communicates with the backend to fetch and display the relevant data.

MovieDataSet Class: This class is tasked with creating and managing a collection of movies, which is the dataset that the system operates on. The generateListOfMovies() method suggests that it populates the dataset, potentially by loading data from an external source, in our case a csv file.

MovieMethods Class: This class contains a suite of operations that can be performed on the movie dataset, such as sorting the movies by different attributes (name, rating, director, etc.) and appending movies to a user's personalized list. It operates on collections of Movie objects, as indicated by methods returning or dealing with vector<Movie> (a C++ Standard Library container used to store sequences of elements).

Solid Principles explanation: Our UML Diagram follows SOLID principles but does not use all of the principles, as our program does not require certain implementations that require specific principles. The principles that our program follows and requires include: Single responsibility principle, Interface segregation principle, and the open closed principle. Firstly, our UML Diagram strictly follows the SRP because for each functionality of our program, we have a specific class; for example:Each class in the diagram seems to have a specific responsibility. For example, the Movie class is responsible for movie-related data, the InputOutput class handles user input and output operations, and the MovieDataSet class is responsible for generating a list of movies and our MovieMethods class focuses on sorting each film by its attributes such as rating and duration, This suggests the SRP is being followed.
Open-closed principle: An example of us adopting the Open-Closed-Principle would be our MovieMethods class, specifically, our SortByName() and SortByRating(). We can extend the logic for these methods without having to modify the existing code.
Using both these principles positively impacts our program by keeping it cleaner and less prone to bugs and errors. When following the SRP, our code is neater as we as the developers know exactly which class is created to perform which function, rather than all functionalities being compressed into one large class. When following the OCP it prevents the likelihood of bugs in our code when developing sort methods because we don’t have to change the code for any of methods, since they are open for any object to us. 
Since our program does not use any inheritance as of now, we do not need to be concerend about Liskov's Substitution Principle. Each Movie object is required to use each method stated in the movie method class, so no seperate interface is required for any of the methods, this allows us to disregard Interface Segregation Principle. 



 
 > ## Phase III
------------------------------------------------------------------------------------
 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
>
>

> <img width="600" alt="Screenshot 2024-03-12 at 2 53 06 PM" src="https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/143841150/fc6ce4d0-514d-4b0c-9f16-2e316acbbff1">

<img width="600" alt="Screenshot 2024-03-12 at 2 52 40 PM" src="https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/143841150/64f7d715-c07b-4c5e-8437-fd713e41abaf">

<img width="600" alt="Screenshot 2024-03-12 at 2 52 10 PM" src="https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/143841150/e20636df-149f-46ea-a9ac-0810cd136939">


 ## Installation/Usage
 > Instructions on installing and running Filmify
1. First clone the git repo onto your local machine.
2. Next, navigte to the `src` folder and right click on it and then click `Open in Integrated terminal`
3. Now, in the terminal run the following command `g++ inputoutput.cpp main.cpp Movie.cpp MovieDataSet.cpp MovieMethods.cpp -o Filmify`
4. Lastly, run `./Filimify`
5. Enjoy!
 ## Testing
Our project was tested using unit testing. We ran cmake . and make on the project. In addition, we also ran Valgrind
> Attatched below are screenshot of our unit tests and our build target:
> 
 ![1E0E080F-8A05-4807-8E9C-1B450E01CD57](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/147021240/ea820584-92a7-4f1e-af54-1145b57690f3)

![E53C40CC-B320-44BB-BCEF-0CAEB04FBD8B_4_5005_c](https://github.com/cs100/final-project-mhass027-jmann028-ialib001-aprat023/assets/147021240/fb5c8fb2-686c-4b46-b8dd-6ed1abbf9e5f)

 

#include "gtest/gtest.h"

#include "../header/inputoutput.h"
#include "../header/Movie.h"
#include "../header/MovieMethods.h"
#include "../header/MovieDataSet.h"

//Write all my unit tests

TEST(MoviesVectorSetupTests, TestFirstMovie)
{
    MovieDataSet myDataset = MovieDataSet(); //good
    
    vector<Movie> generateListOfMovies = myDataset.generateListOfMovies();

    EXPECT_EQ(generateListOfMovies.at(0).getMovieName(), "The Shining");
    EXPECT_EQ(generateListOfMovies.at(0).getActor(), "Jack Nicholson");
    EXPECT_EQ(generateListOfMovies.at(0).getGenre(), "Drama");
    EXPECT_EQ(generateListOfMovies.at(0).getDirector(), "Stanley Kubrick");
    EXPECT_EQ(generateListOfMovies.at(0).getYear(), 1980);
    EXPECT_EQ(generateListOfMovies.at(0).getRating(), 8.4);
}

TEST(MoviesVectorSetupTests, TestFiftiethMovie)
{
    MovieDataSet myDataset = MovieDataSet();
    
    vector<Movie> generateListOfMovies = myDataset.generateListOfMovies();

    EXPECT_EQ(generateListOfMovies.at(49).getMovieName(), "Lion of the Desert");
    EXPECT_EQ(generateListOfMovies.at(49).getActor(), "Anthony Quinn");
    EXPECT_EQ(generateListOfMovies.at(49).getGenre(), "Biography");
    EXPECT_EQ(generateListOfMovies.at(49).getDirector(), "Moustapha Akkad");
    EXPECT_EQ(generateListOfMovies.at(49).getYear(), 1980);
    EXPECT_EQ(generateListOfMovies.at(49).getRating(), 8.3);
}

TEST(MoviesVectorSetupTests, Test2500thMovie)
{
    MovieDataSet myDataset = MovieDataSet();
    
    vector<Movie> generateListOfMovies = myDataset.generateListOfMovies();

    EXPECT_EQ(generateListOfMovies.at(2499).getMovieName(), "Only You");
    EXPECT_EQ(generateListOfMovies.at(2499).getActor(), "Marisa Tomei");
    EXPECT_EQ(generateListOfMovies.at(2499).getGenre(), "Comedy");
    EXPECT_EQ(generateListOfMovies.at(2499).getDirector(), "Norman Jewison");
    EXPECT_EQ(generateListOfMovies.at(2499).getYear(), 1994);
    EXPECT_EQ(generateListOfMovies.at(2499).getRating(), 6.5);
}

TEST(MoviesVectorSetupTests, TestMoviesWithComma) {
    MovieDataSet myDataset = MovieDataSet();
    
    vector<Movie> generateListOfMovies = myDataset.generateListOfMovies();

    EXPECT_EQ(generateListOfMovies.at(71).getMovieName(), "Bon Voyage, Charlie Brown (and Don't Come Back!!)");
    EXPECT_EQ(generateListOfMovies.at(71).getGenre(), "Animation");
    EXPECT_EQ(generateListOfMovies.at(71).getYear(), 1980);
    EXPECT_EQ(generateListOfMovies.at(71).getRating(), 7.3);
    EXPECT_EQ(generateListOfMovies.at(71).getDirector(), "Bill Melendez");
    EXPECT_EQ(generateListOfMovies.at(71).getActor(), "Scott Beach");

    EXPECT_EQ(generateListOfMovies.at(1476).getMovieName(), "The Cook, the Thief, His Wife & Her Lover");
    EXPECT_EQ(generateListOfMovies.at(1476).getGenre(), "Crime");
    EXPECT_EQ(generateListOfMovies.at(1476).getYear(), 1989);
    EXPECT_EQ(generateListOfMovies.at(1476).getRating(), 7.6);
    EXPECT_EQ(generateListOfMovies.at(1476).getDirector(), "Peter Greenaway");
    EXPECT_EQ(generateListOfMovies.at(1476).getActor(), "Richard Bohringer");

}

TEST(MoviesVectorSetupTests, TestNumMovies) {
    MovieDataSet myDataset = MovieDataSet();
    
    vector<Movie> generateListOfMovies = myDataset.generateListOfMovies();

    // check if all 7668 movies were passed into the vector
    EXPECT_EQ(generateListOfMovies.size(), 7668);



}

TEST(RatingSortTest, sortfirst10MoviesByRating) {
    MovieMethods TestMovies1;
    
    for (int i = 0; i < 10; ++i) {
        TestMovies1.testPushBackforTesting(TestMovies1.getallMoviesmovieForTesting(i));
    }

    TestMovies1.SortByRating();
    
    EXPECT_EQ(TestMovies1.getMovieTesting(0).getMovieName(), "Star Wars: Episode V - The Empire Strikes Back");
    EXPECT_EQ(TestMovies1.getMovieTesting(1).getMovieName(), "The Shining");
    EXPECT_EQ(TestMovies1.getMovieTesting(2).getMovieName(), "Raging Bull");
    EXPECT_EQ(TestMovies1.getMovieTesting(3).getMovieName(), "The Blues Brothers");
    EXPECT_EQ(TestMovies1.getMovieTesting(4).getMovieName(), "Airplane!");
    EXPECT_EQ(TestMovies1.getMovieTesting(5).getMovieName(), "Caddyshack");
    EXPECT_EQ(TestMovies1.getMovieTesting(6).getMovieName(), "The Long Riders");
    EXPECT_EQ(TestMovies1.getMovieTesting(7).getMovieName(), "Superman II");
    EXPECT_EQ(TestMovies1.getMovieTesting(8).getMovieName(), "Friday the 13th");
    EXPECT_EQ(TestMovies1.getMovieTesting(9).getMovieName(), "The Blue Lagoon");

}

TEST(RatingSortTest, findHighestRated) {
    MovieMethods TestMovies2;

    for (int i = 0; i < 7668; ++i) {
        TestMovies2.testPushBackforTesting(TestMovies2.getallMoviesmovieForTesting(i));
    }

    TestMovies2.SortByRating();

    EXPECT_EQ(TestMovies2.getMovieTesting(0).getMovieName(), "The Shawshank Redemption");
}

TEST(RatingSortTest, findLowestRated) {
    MovieMethods TestMovies3;

    for (int i = 0; i < 7668; ++i) {
        TestMovies3.testPushBackforTesting(TestMovies3.getallMoviesmovieForTesting(i));
    }

    TestMovies3.SortByRating();

    EXPECT_EQ(TestMovies3.getMovieTesting(7667).getMovieName(), "Love by Drowning");

}

TEST(NameSortTest, sortfirst10MoviesByName) {
    MovieMethods TestMovies1;
    
    for (int i = 0; i < 10; ++i) {
        TestMovies1.testPushBackforTesting(TestMovies1.getallMoviesmovieForTesting(i));
    }

    TestMovies1.SortByAlphabetical();
    
    EXPECT_EQ(TestMovies1.getMovieTesting(0).getMovieName(), "Airplane!");
    EXPECT_EQ(TestMovies1.getMovieTesting(1).getMovieName(), "Caddyshack");
    EXPECT_EQ(TestMovies1.getMovieTesting(2).getMovieName(), "Friday the 13th");
    EXPECT_EQ(TestMovies1.getMovieTesting(3).getMovieName(), "Raging Bull");
    EXPECT_EQ(TestMovies1.getMovieTesting(4).getMovieName(), "Star Wars: Episode V - The Empire Strikes Back");
    EXPECT_EQ(TestMovies1.getMovieTesting(5).getMovieName(), "Superman II" );
    EXPECT_EQ(TestMovies1.getMovieTesting(6).getMovieName(), "The Blue Lagoon");
    EXPECT_EQ(TestMovies1.getMovieTesting(7).getMovieName(), "The Blues Brothers");
    EXPECT_EQ(TestMovies1.getMovieTesting(8).getMovieName(), "The Long Riders");
    EXPECT_EQ(TestMovies1.getMovieTesting(9).getMovieName(), "The Shining");

}


TEST(GetMovieTests, MovieIsIn) {
    MovieMethods TestMovies1;

    string testName1 = "The Lego Ninjago Movie";
    Movie testMovie1("The Lego Ninjago Movie", "Jackie Chan", "Animation", "Charlie Bean", 6.0, 2017);

    EXPECT_EQ(TestMovies1.GetMovieName(testName1).getMovieName(), testMovie1.getMovieName());
    EXPECT_EQ(TestMovies1.GetMovieName(testName1).getGenre(), testMovie1.getGenre());
    EXPECT_EQ(TestMovies1.GetMovieName(testName1).getDirector(), testMovie1.getDirector());
    EXPECT_EQ(TestMovies1.GetMovieName(testName1).getActor(), testMovie1.getActor());
    EXPECT_EQ(TestMovies1.GetMovieName(testName1).getRating(), testMovie1.getRating());
    EXPECT_EQ(TestMovies1.GetMovieName(testName1).getYear(), testMovie1.getYear());
}

TEST(GetMovieTests, MovieIsIn2) {
    MovieMethods TestMovies2;

    string testName2 = "Immediate Family";
    Movie testMovie2("Immediate Family", "Glenn Close", "Drama", "Jonathan Kaplan", 6.0, 1989);

    EXPECT_EQ(TestMovies2.GetMovieName(testName2).getMovieName(), testMovie2.getMovieName());
    EXPECT_EQ(TestMovies2.GetMovieName(testName2).getGenre(), testMovie2.getGenre());
    EXPECT_EQ(TestMovies2.GetMovieName(testName2).getDirector(), testMovie2.getDirector());
    EXPECT_EQ(TestMovies2.GetMovieName(testName2).getActor(), testMovie2.getActor());
    EXPECT_EQ(TestMovies2.GetMovieName(testName2).getRating(), testMovie2.getRating());
    EXPECT_EQ(TestMovies2.GetMovieName(testName2).getYear(), testMovie2.getYear());
}

TEST(GetMovieTests, MovieIsNotIn) {
    MovieMethods TestMovies3;

    string testName3 = "Free Guy";
    Movie testMovie3("Free Guy", "Sci-Fi", "Shawn Levy", "Ryan Reynolds", 7.1, 2021);

    EXPECT_NE(TestMovies3.GetMovieName(testName3).getMovieName(), testMovie3.getMovieName());
    EXPECT_NE(TestMovies3.GetMovieName(testName3).getGenre(), testMovie3.getGenre());
    EXPECT_NE(TestMovies3.GetMovieName(testName3).getDirector(), testMovie3.getDirector());
    EXPECT_NE(TestMovies3.GetMovieName(testName3).getActor(), testMovie3.getActor());
    EXPECT_NE(TestMovies3.GetMovieName(testName3).getRating(), testMovie3.getRating());
    EXPECT_NE(TestMovies3.GetMovieName(testName3).getYear(), testMovie3.getYear());
}













TEST(RecommendedMoviesGenreTests, actionTest) {
   MovieMethods TestMovies1;
   string genre = "Action";
  
   TestMovies1.CreateReccsBasedOnGenre(genre);
 
   EXPECT_EQ(TestMovies1.getMovieTesting(0).getMovieName(), "Star Wars: Episode V - The Empire Strikes Back");
   EXPECT_EQ(TestMovies1.getMovieTesting(1).getMovieName(), "The Blues Brothers");
   EXPECT_EQ(TestMovies1.getMovieTesting(2).getMovieName(), "Superman II");
   EXPECT_EQ(TestMovies1.getMovieTesting(3).getMovieName(), "Any Which Way You Can");
   EXPECT_EQ(TestMovies1.getMovieTesting(4).getMovieName(), "The Final Countdown");
   EXPECT_EQ(TestMovies1.getMovieTesting(5).getMovieName(), "Raise the Titanic");
   EXPECT_EQ(TestMovies1.getMovieTesting(6).getMovieName(), "Smokey and the Bandit II");
   EXPECT_EQ(TestMovies1.getMovieTesting(7).getMovieName(), "The Stunt Man");
   EXPECT_EQ(TestMovies1.getMovieTesting(8).getMovieName(), "The Island");
   EXPECT_EQ(TestMovies1.getMovieTesting(9).getMovieName(), "The Nude Bomb");
 
   EXPECT_EQ(TestMovies1.sizeofRecommendedForTesting(), 1705);
 
}
 
TEST(RecommendedMoviesGenreTests, comedyTest) {
   MovieMethods TestMovies2;
   string genre = "Comedy";
  
   TestMovies2.CreateReccsBasedOnGenre(genre);
 
   EXPECT_EQ(TestMovies2.getMovieTesting(0).getMovieName(), "Airplane!");
   EXPECT_EQ(TestMovies2.getMovieTesting(1).getMovieName(), "Caddyshack");
   EXPECT_EQ(TestMovies2.getMovieTesting(2).getMovieName(), "9 to 5");
   EXPECT_EQ(TestMovies2.getMovieTesting(3).getMovieName(), "Stir Crazy");
   EXPECT_EQ(TestMovies2.getMovieTesting(4).getMovieName(), "Little Darlings");
   EXPECT_EQ(TestMovies2.getMovieTesting(5).getMovieName(), "My Bodyguard");
   EXPECT_EQ(TestMovies2.getMovieTesting(6).getMovieName(), "Seems Like Old Times");
   EXPECT_EQ(TestMovies2.getMovieTesting(7).getMovieName(), "Private Benjamin");
   EXPECT_EQ(TestMovies2.getMovieTesting(8).getMovieName(), "The Hollywood Knights");
   EXPECT_EQ(TestMovies2.getMovieTesting(9).getMovieName(), "Motel Hell");
 
   EXPECT_EQ(TestMovies2.sizeofRecommendedForTesting(), 2245);
 
}
 
TEST(RecommendedMoviesGenreTests, dramaTest) {
   MovieMethods TestMovies3;
   string genre = "Drama";
  
   TestMovies3.CreateReccsBasedOnGenre(genre);
 
   EXPECT_EQ(TestMovies3.getMovieTesting(0).getMovieName(), "The Shining");
   EXPECT_EQ(TestMovies3.getMovieTesting(1).getMovieName(), "Ordinary People");
   EXPECT_EQ(TestMovies3.getMovieTesting(2).getMovieName(), "Somewhere in Time");
   EXPECT_EQ(TestMovies3.getMovieTesting(3).getMovieName(), "Fame");
   EXPECT_EQ(TestMovies3.getMovieTesting(4).getMovieName(), "Urban Cowboy");
   EXPECT_EQ(TestMovies3.getMovieTesting(5).getMovieName(), "Cattle Annie and Little Britches");
   EXPECT_EQ(TestMovies3.getMovieTesting(6).getMovieName(), "The Jazz Singer");
   EXPECT_EQ(TestMovies3.getMovieTesting(7).getMovieName(), "Breaker Morant");
   EXPECT_EQ(TestMovies3.getMovieTesting(8).getMovieName(), "The Competition");
   EXPECT_EQ(TestMovies3.getMovieTesting(9).getMovieName(), "Honeysuckle Rose");
 
   EXPECT_EQ(TestMovies3.sizeofRecommendedForTesting(), 1518);
 
}
 
TEST(RecommendedMoviesGenreTests, GenreNotInListTest) {
   MovieMethods TestMovies4;
   string genre = "Fiction";
 
   TestMovies4.CreateReccsBasedOnGenre(genre);
 
   EXPECT_EQ(TestMovies4.sizeofRecommendedForTesting(), 0);
}

TEST(RecommendedMoviesDirectorTests, IrvinKershnerTest) {
   MovieMethods TestMovies1;
   string Director = "Irvin Kershner";
  
   TestMovies1.CreateReccsBasedOnDirector(Director);
 
   EXPECT_EQ(TestMovies1.getMovieTesting(0).getMovieName(), "Star Wars: Episode V - The Empire Strikes Back");
   EXPECT_EQ(TestMovies1.getMovieTesting(1).getMovieName(), "Never Say Never Again");
   EXPECT_EQ(TestMovies1.getMovieTesting(2).getMovieName(), "RoboCop 2");

 
   EXPECT_EQ(TestMovies1.sizeofRecommendedForTesting(), 3);
 
}
 
TEST(RecommendedMoviesDirectorTests, StanleyKubrickTest) {
   MovieMethods TestMovies2;
   string Director = "Stanley Kubrick";
  
   TestMovies2.CreateReccsBasedOnDirector(Director);
 
   EXPECT_EQ(TestMovies2.getMovieTesting(0).getMovieName(), "The Shining");
   EXPECT_EQ(TestMovies2.getMovieTesting(1).getMovieName(), "Full Metal Jacket");
   EXPECT_EQ(TestMovies2.getMovieTesting(2).getMovieName(), "Eyes Wide Shut");
   
 
   EXPECT_EQ(TestMovies2.sizeofRecommendedForTesting(), 3);
 
}


TEST(RecommendedMoviesActorTests, DwayneJohnsonTest) {
   MovieMethods TestMovies1;
   string Actor = "Dwayne Johnson";
  
   TestMovies1.CreateReccsBasedOnActor(Actor);
 
   EXPECT_EQ(TestMovies1.getMovieTesting(0).getMovieName(), "The Scorpion King");
   EXPECT_EQ(TestMovies1.getMovieTesting(1).getMovieName(), "The Rundown");
   EXPECT_EQ(TestMovies1.getMovieTesting(2).getMovieName(), "Walking Tall");

 
   EXPECT_EQ(TestMovies1.sizeofRecommendedForTesting(), 22);
 
}
 
TEST(RecommendedMoviesActorTests, ChrisPrattTest) {
   MovieMethods TestMovies2;
   string Actor = "Chris Pratt";
  
   TestMovies2.CreateReccsBasedOnActor(Actor);
 
   EXPECT_EQ(TestMovies2.getMovieTesting(0).getMovieName(), "Guardians of the Galaxy");
   EXPECT_EQ(TestMovies2.getMovieTesting(1).getMovieName(), "The Lego Movie");
   EXPECT_EQ(TestMovies2.getMovieTesting(2).getMovieName(), "Jurassic World");
   
 
   EXPECT_EQ(TestMovies2.sizeofRecommendedForTesting(), 6);
 
}

TEST(PrintRecommendedMoviesTests, NoMoviesFound) {
    MovieMethods TestMovies;
    for (int i = 0; i < 10; ++i) {
        TestMovies.testPushBackforTesting(TestMovies.getallMoviesmovieForTesting(i));
    }
    EXPECT_EQ(TestMovies.PrintFinalListOfReccs(5), 0);
}
TEST(PrintRecommendedMoviesTests, FullPage10Movies) {
    MovieMethods TestMovies;
    for (int i = 0; i < 100; ++i) {
        TestMovies.testPushBackforTesting(TestMovies.getallMoviesmovieForTesting(i));
    }
    EXPECT_EQ(TestMovies.PrintFinalListOfReccs(0), 10);
}
TEST(PrintRecommendedMoviesTests, NotFullPageMovies) {
    MovieMethods TestMovies;
    for (int i = 0; i < 5; ++i) {
        TestMovies.testPushBackforTesting(TestMovies.getallMoviesmovieForTesting(i));
    }
    EXPECT_EQ(TestMovies.PrintFinalListOfReccs(0), 5);
}



TEST(ReleaseSortTest, findHighestRelease) {
    MovieMethods TestMovies;

    for (int i = 0; i < 7668; ++i) {
        TestMovies.testPushBackforTesting(TestMovies.getallMoviesmovieForTesting(i));
    }

    TestMovies.SortByYear();

    EXPECT_EQ(TestMovies.getallMoviesmovieForTesting(7667).getYear(), 2020);
}


TEST(ReleaseSortTest, findlowestTestRelease) {
    MovieMethods TestMovies;

    for (int i = 0; i < 7668; ++i) {
        TestMovies.testPushBackforTesting(TestMovies.getallMoviesmovieForTesting(i));
    }

    TestMovies.SortByYear();

    EXPECT_EQ(TestMovies.getallMoviesmovieForTesting(0).getYear(), 1980);
}


TEST(DoesStarActorExistTests, JohnRitterTest) {
    MovieMethods TestMovies1; 
    string actor = "John Ritter";

    EXPECT_EQ(TestMovies1.isActorReal(actor), true);
}

TEST(DoesStarActorExistTests, SiyabongaMabasoTest) {
    MovieMethods TestMovies2; 
    string actor = "Siyabonga Mabaso";

    EXPECT_EQ(TestMovies2.isActorReal(actor), true);
}

TEST(DoesStarActorExistTests, RainerWernerFassbinderTest) {
    MovieMethods TestMovies3; 
    string actor = "Rainer Werner Fassbinder";

    EXPECT_EQ(TestMovies3.isActorReal(actor), true);
}

TEST(DoesStarActorExistTests, NotInallMovies1) {
    MovieMethods TestMovies4; 
    string actor = "Camille Lacroix";

    EXPECT_EQ(TestMovies4.isActorReal(actor), false);
}

TEST(DoesStarActorExistTests, NotInallMovies2) {
    MovieMethods TestMovies5; 
    string actor = "Theo Fernandez";

    EXPECT_EQ(TestMovies5.isActorReal(actor), false);
}

TEST(DoesDirectorExistTests, JohnPatrickShanleyTest) {
    MovieMethods TestMovies1; 
    string director = "John Patrick Shanley";

    EXPECT_EQ(TestMovies1.isDirectorReal(director), true);
}

TEST(DoesDirectorExistTests, CurtisHansonTest) {
    MovieMethods TestMovies2; 
    string director = "Curtis Hanson";

    EXPECT_EQ(TestMovies2.isDirectorReal(director), true);
}

TEST(DoesDirectorExistTests, SpikeLeeTest) {
    MovieMethods TestMovies3; 
    string director = "Spike Lee";

    EXPECT_EQ(TestMovies3.isDirectorReal(director), true);
}

TEST(DoesDirectorExistTests, NotInallMovies1) {
    MovieMethods TestMovies4; 
    string director = "Andrea Sembrana";

    EXPECT_EQ(TestMovies4.isDirectorReal(director), false);
}

TEST(DoesDirectorExistTests, NotInallMovies2) {
    MovieMethods TestMovies5; 
    string director = "Eddie Nguyen";

    EXPECT_EQ(TestMovies5.isDirectorReal(director), false);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

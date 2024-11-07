#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void general_quiz();
void capital_quiz();
void occupation_quiz();
void vehicle_quiz();
void fruits_quiz();
void math_quiz();
void menu();
void quiz_select();


void general_quiz() {
    system("cls");
    printf("General Quiz:\n");
    char *questions[] = {
        "1. What is the color of the sky?\n(a) Blue\n(b) Green\n(c) Red\n",
        "2. How many days are there in a week?\n(a) 5\n(b) 6\n(c) 7\n",
        "3. What is the largest ocean?\n(a) Atlantic\n(b) Pacific\n(c) Indian\n",
        "4. What planet do we live on?\n(a) Mars\n(b) Earth\n(c) Venus\n",
        "5. What is H2O?\n(a) Water\n(b) Oxygen\n(c) Hydrogen\n"
    };
    char *answers[] = {"a,A", "c,C", "b,B", "b,B", "a,A"};
    char user_answer;
    int points = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("%s", questions[i]);
        printf("Your answer: ");
        scanf(" %c", &user_answer);
        if (strchr(answers[i], user_answer) != NULL) {
            printf("Correct!\n\n");
            points++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", answers[i][0]);
        }
    }
    printf("Your total points: %d out of 5\n", points);
         
	char retry;
    printf("Press 'r' for retry\n");
    printf("Press any other key to go back to the menu...");
    
    retry = getch(); 

    if (retry == 'r') {
        general_quiz(); 
    } else {
        system("cls");
        menu();
   	}
}

void capital_quiz() {
	system("cls");
    printf("Capital Quiz:\n");
    char *questions[] = {
        "1. What is the capital of France?\n(a) Paris\n(b) Rome\n(c) Berlin\n",
        "2. What is the capital of Japan?\n(a) Tokyo\n(b) Osaka\n(c) Kyoto\n",
        "3. What is the capital of Australia?\n(a) Sydney\n(b) Canberra\n(c) Melbourne\n",
        "4. What is the capital of Canada?\n(a) Toronto\n(b) Ottawa\n(c) Vancouver\n",
        "5. What is the capital of Thailand?\n(a) Phuket\n(b) Chonburi\n(c) Bangkok\n"
    };
    char *answers[] = {"a,A", "a,A", "b,B", "b,B", "c,C"};
    char user_answer;
    int points = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("%s", questions[i]);
        printf("Your answer: ");
        scanf(" %c", &user_answer);
        if (strchr(answers[i], user_answer) != NULL) {
            printf("Correct!\n\n");
            points++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", answers[i][0]);
        }
    }
    printf("Your total points: %d out of 5\n", points);
         
	char retry;
    printf("Press 'r' for retry\n");
    printf("Press any other key to go back to the menu...");
    
    retry = getch(); 

    if (retry == 'r' || retry == 'R') {
        capital_quiz(); 
    } else {
        system("cls");
        menu();
    }
}

void occupation_quiz() {
	system("cls");
    printf("Occupation Quiz:\n");
    char *questions[] = {
        "1. Who treats sick people?\n(a) Engineer\n(b) Doctor\n(c) Teacher\n",
        "2. Who designs buildings?\n(a) Architect\n(b) Chef\n(c) Lawyer\n",
        "3. Who writes computer programs?\n(a) Chef\n(b) Programmer\n(c) Mechanic\n",
        "4. Who helps catch criminals?\n(a) Pilot\n(b) Scientist\n(c) Police officer\n",
        "5. Who teaches students?\n(a) Teacher\n(b) Plumber\n(c) Farmer\n"
    };
    char *answers[] = {"b,B", "a,A", "b,B", "c,C", "a,A"};
    char user_answer;
    int points = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("%s", questions[i]);
        printf("Your answer: ");
        scanf(" %c", &user_answer);
        if (strchr(answers[i], user_answer) != NULL) {
            printf("Correct!\n\n");
            points++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", answers[i][0]);
        }
    }
    printf("Your total points: %d out of 5\n", points);
         
	char retry;
    printf("Press 'r' for retry\n");
    printf("Press any other key to go back to the menu...");
    
    retry = getch(); 

    if (retry == 'r' || retry == 'R') {
        occupation_quiz(); 
    } else {
        system("cls");
        menu();
    }
}

void vehicle_quiz() {
	system("cls");
    printf("Vehicle Quiz:\n");
    char *questions[] = {
        "1. Which vehicle is used to fly?\n(a) Car\n(b) Airplane\n(c) Bicycle\n",
        "2. Which vehicle has two wheels?\n(a) Bus\n(b) Bicycle\n(c) Truck\n",
        "3. Which vehicle runs on rails?\n(a) Train\n(b) Bus\n(c) Car\n",
        "4. Which vehicle is used in water?\n(a) Boat\n(b) Truck\n(c) Car\n",
        "5. Which vehicle is typically used for long road trips?\n(a) Motorcycle\n(b) Bicycle\n(c) Car\n"
    };
    char *answers[] = {"b,B", "b,B", "a,A", "a,A", "c,C"};
    char user_answer;
    int points = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("%s", questions[i]);
        printf("Your answer: ");
        scanf(" %c", &user_answer);
        if (strchr(answers[i], user_answer) != NULL) {
            printf("Correct!\n\n");
            points++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", answers[i][0]);
        }
    }
    printf("Your total points: %d out of 5\n", points);
         
	char retry;
    printf("Press 'r' for retry\n");
    printf("Press any other key to go back to the menu...");
    
    retry = getch(); 

    if (retry == 'r' || retry == 'R') {
        vehicle_quiz(); 
    } else {
        system("cls");
        menu();
    }
}

void fruits_quiz() {
	system("cls");
    printf("Fruits Quiz:\n");
    char *questions[] = {
        "1. Which of these is a citrus fruit?\n(a) Apple\n(b) Orange\n(c) Banana\n",
        "2. Which of these fruits is red?\n(a) Apple\n(b) Grape\n(c) Blueberry\n",
        "3. Which fruit has a large pit?\n(a) Strawberry\n(b) Pineapple\n(c) Peach\n",
        "4. Which fruit is yellow?\n(a) Kiwi\n(b) Banana\n(c) Cherry\n",
        "5. Which fruit grows on a vine?\n(a) Watermelon\n(b) Apple\n(c) Pineapple\n"
    };
    char *answers[] = {"b,B", "a,A", "c,C", "b,B", "a,A"};
    char user_answer;
    int points = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("%s", questions[i]);
        printf("Your answer: ");
        scanf(" %c", &user_answer);
        if (strchr(answers[i], user_answer) != NULL) {
            printf("Correct!\n\n");
            points++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", answers[i][0]);
        }
    }
    printf("Your total points: %d out of 5\n", points);
         
	char retry;
    printf("Press 'r' for retry\n");
    printf("Press any other key to go back to the menu...");
    
    retry = getch(); 

    if (retry == 'r' || retry == 'R') {
        fruits_quiz(); 
    } else {
        system("cls");
        menu();
    }
}

void math_quiz() {
	system("cls");
    printf("Math Quiz:\n");
    char *questions[] = {
        "1. What is 5 + 3?\n(a) 6\n(b) 7\n(c) 8\n",
        "2. What is 10 - 4?\n(a) 6\n(b) 5\n(c) 4\n",
        "3. What is 7 * 2?\n(a) 12\n(b) 14\n(c) 10\n",
        "4. What is 9 / 3?\n(a) 2\n(b) 4\n(c) 3\n",
        "5. What is the square root of 16?\n(a) 4\n(b) 5\n(c) 6\n"
    };
    char *answers[] = {"c,C", "a,A", "b,B", "c,C", "a,A"};
    char user_answer;
    int points = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("%s", questions[i]);
        printf("Your answer: ");
        scanf(" %c", &user_answer);
        if (strchr(answers[i], user_answer) != NULL) {
            printf("Correct!\n\n");
            points++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", answers[i][0]);
        }
    }
    printf("Your total points: %d out of 5\n", points);
         
	char retry;
    printf("Press 'r' for retry\n");
    printf("Press any other key to go back to the menu...");
    
    retry = getch(); 

    if (retry == 'r' || retry == 'R') {
        math_quiz(); 
    } else {
        system("cls");
        menu();
    }
}


void menu() {
    int numberofquiz;
    printf("  ____   __   ____  _  _     __   _  _  __  ____  _   \n");
    printf(" (  __) / _\\ / ___)( \\/ )   /  \\ / )( \\(  )(__  )/ \\  \n");
    printf("  ) _) /    \\\\___ \\ )  /   (  O )) \\/ ( )(  / _/ \\\\_/  \n");
    printf(" (____)\\_/\\_/(____/(__/     \\__/\\____/(__)(____)(_)   \n\n");


	printf("       _       __    ___   ____      ___   _    \n");
    printf("      | |\\/|  / /\\  | | \\ | |_      | |_) \\ \\_/ \n");
    printf("      |_|  | /_/--\\ |_|_/ |_|__     |_|_)  |_|  \n");
	printf("\n%34s\n","Pawit Weerakoop");
	printf("%28s\n","And");
	printf("%35s\n","Patiphan  Seeud\n");

    printf("%30s\n", "Category");
    char quiz[6][20] = {
        "[1] General", 
        "[2] Capital", 
        "[3] Occupation", 
        "[4] Vehicle", 
        "[5] Fruits", 
        "[6] Math"
    };
    
    for (int i = 0; i < 6; i += 2) {
        printf("%-40s %-40s\n", quiz[i], quiz[i+1]);

    }

    	printf("\n%30s\n", "Easy Quiz");
    	printf("%45s","Enter number for start the quiz [1-6]: ");
    	
    
}

void quiz_select() {
    int numberofquiz;

    while (1) {
        system("cls");
        menu(); 
        
        if (scanf("%d", &numberofquiz) != 1) { 
            while (getchar() != '\n');
            continue;
        }
        
        if (numberofquiz == 1) {
            general_quiz(); 
        } else if (numberofquiz == 2) {
            capital_quiz();
        } else if (numberofquiz == 3) {
            occupation_quiz();
        } else if (numberofquiz == 4) {
            vehicle_quiz();
        } else if (numberofquiz == 5) {
            fruits_quiz();
        } else if (numberofquiz == 6) {
            math_quiz();
    	}
	}
}


int main() {
    while(1) {
        menu();
        quiz_select();
    }
    return 0;
}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//movie struct definition
struct movie {
    struct movie *next;
};

struct movie *NewMovie();
void addMovie(struct movie *start);
void browseMovies(struct movie *start);
void showMovie(struct movie *current);
void changeMovie(struct movie *start);
void editMovie(struct movie *current);
struct movie *deleteMovie(struct movie *start);
void save(struct movie *start, FILE *p_file);
struct movie *load(FILE *p_file);
struct movie *sort(struct movie *start);
void searchMovie(struct movie *start);
float calculateEarnings(struct movie *start);
struct movie *exitProgram(struct movie *start);

void showMainMenu();
void showLoadMenu();

int main () {
    struct movie *start = NULL;
    int choice = 0;
    int ch;
    FILE *p_file;
    float total = 0.00;

    showLoadMenu();
    scanf("%d", &choice);
    while ((ch = getchar()) != '\n' && ch != EOF);

    switch (choice) {
        case 1: start = load(p_file); break;
        default: break;
    }

    choice = 0;
    while (choice != 9)
    {
        showMainMenu();

        scanf("%d", &choice);
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        //call function for different options
        switch(choice) 
        {
            case 1:
            if (start == NULL)
            {
                start = NewMovie();
            }
            else
            {
                addMovie(start);
            };
            break;
            case 2: browseMovies(start); break;
            case 3: changeMovie(start); break;
            case 4: start = deleteMovie(start); break;
            case 5: save(start, p_file); break;
            case 6: start = sort(start); break;
            case 7: searchMovie(start); break;
            case 8: total = calculateEarnings(start); printf("\nStore has earned $%.2f\n", total); break;
            case 9: start = exitProgram(start); break;
            default: fputs("\nError. Choice not found.", stdout);
        }
    }

    return 0;
}

struct movie *NewMovie() {
}

void addMovie(struct movie *start) {
    fputs("Foolish rabbit, Trix are reserved for the youth!", stdout);
}

void browseMovies(struct movie *start) {
    fputs("I am ceritifiably insane for chocolate puffs of sorts!", stdout);
}

void showMovie(struct movie *current) {

}

void changeMovie(struct movie *start) {

}

void editMovie(struct movie *current) {

}

struct movie *deleteMovie(struct movie *start) {
}

void save(struct movie *start, FILE *p_file) {

}

struct movie *load(FILE *p_file) {

}

struct movie *sort(struct movie *start) {

}

void searchMovie(struct movie *start) {

}

float calculateEarnings(struct movie *current) {

}

void showMainMenu() {
        puts("\nPlease choose an option:");
        puts("1. Add new entry");
        puts("2. Browse entries");
        puts("3. Modify existing entry ");
        puts("4. Delete entry");
        puts("5. Save entries ");
        puts("6. Sort entries");
        puts("7. Search for entry");
        puts("8. Calcuate total");
        puts("9. Exit");
}

void showLoadMenu() {
    puts("\nWould you like to:");
    puts("1. Load a previously saved library database");
    puts("2. Load a new database\n");
}

struct movie *exitProgram(struct movie *start) {

}
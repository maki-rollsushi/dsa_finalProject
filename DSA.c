//MARK L. DELA CRUZ 
//BSCS 2A

//DAILY LOGS
//Lab activity notes: Just created a welcome screen and main menu screens
//LAB1
//Created a program for repeated user input if it is invalid.
//Made sure that all the screens fit and centered for 80x24 screen size.

//LAB 2
//Created a screen for LDS,NLDS and arrays
//Created the functions for LDS types and NLDS types.
//Created the functions for array manipulation

//12-03-2024
//Finished all the sorting algorithms

//12-08-2024
//Finished all the string operation

//12-10-2024
//Finished all the searching algorithms
//made sure to apply binary and linear searching

//12-14-2024
//Started the link list operations
//made sure to ask for creating a list first and passing it on for further list operations

//12-15-2024
//Started on the stacks
//Push, pop and peek operations 
//Also added the isEmpty and isFull operations

//12-17-2024
//Finished all the stacks and now moving forward to starting queues
//Almost similar operations as stacks but follows the FIFO especially when printing.

//12-19-2024
//Done with queues now starting with trees.
//Made sure that the traversal methods are correct.

//12-20-2024
//Finished the program
//Made some tests and adjus the program flow to ensure similarity between screens.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//STRUCTURES ARE DEFINED AS GLOBAL VARIABLES
typedef struct node{
    int data;
    struct node *nextptr;
} Node;
Node *listHead = NULL;


typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;
void freeStack(StackNode** stack) {
    StackNode* temp;
    while (*stack != NULL) {
        temp = *stack;
        *stack = (*stack)->next;
        free(temp);
    }
    printf("\n\tStack memory freed.\n");
}



typedef struct QueueNode {
    int data;
    struct QueueNode* next;
} QueueNode;

typedef struct Queue {
    QueueNode* front;
    QueueNode* rear;
    int size;
    int capacity;
} Queue;



typedef struct treeNode {
    int data;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;



//function prototypes. (Ctrl + Click to View Function)
void mainMenu(void);

//LDS function prototypes(Ctrl + Click to View Function)
void linearDS(void);
    void arrays(void);
    void arrTraverse(void);
        void intTraverse(void);
        void charTraverse(void);
        void stringTraverse(void);
    void arrInsert(void);
        void intInsert (void);
        void charInsert (void);
        void stringInsert (void);
    void arrDelete(void);
        void intDelete (void);
        void charDelete (void);
        void stringDelete (void);
    void arrSearch(void);
    void arrSort(void);
    void arrModify(void);
        void intModify (void);
        void charModify (void);
        void stringModify (void);
    void linkedList(void);
        void makeList(void);
        void listOperations(Node* head);
        void traverseList(Node* head);
        int findLength(Node* head);
        void insertAfterNode(Node** head, Node* loc, int item);
        void insertAtBeginning(Node** head, int item);
        void deleteNode(Node** head, int index);
        void searchList(Node* head, int item);
        void reverseList(Node** head);
        
    void stacks(void);
        // Function prototypes
        void makeStack(void);
        void push(StackNode** top, int data);
        int pop(StackNode** top);
        int peek(StackNode* top);
        int isEmpty(StackNode* top);
        void stackOperations(StackNode** stack);
        void freeStack(StackNode** stack);

    void queues(void);
        QueueNode* createQueueNode(int data);
        Queue* createQueue(int capacity);
        void enqueue(Queue* queue, int data);
        int dequeue(Queue* queue);
        int isQueueEmpty(Queue* queue);
        int isQueueFull(Queue* queue);
        int peekQueue(Queue* queue);
        int getQueueSize(Queue* queue);
        void freeQueue(Queue* queue);
        void queueOperations(Queue* queue);



//NON LINEAR DATA TYPES ALL FUNCTION PROTOTYPES (Ctrl + Click to View Function)
void nonLinearDS(void);
    void trees(void);
        void makeTree(treeNode** root);
        treeNode* createTreeNode(int data);
        void treeOperations(treeNode* root);
        void insertNode(treeNode** root);
        void printTree(treeNode* root, int space);
        void deleteTreeNode(treeNode** root);
        void printBinaryTree(treeNode* root);
        void breadthFirstTraversal(treeNode* root);
        void preOrderTraversal(treeNode* root);
        void inOrderTraversal(treeNode* root);
        void postOrderTraversal(treeNode* root);
        void inOrder(treeNode* root);
        void postOrder(treeNode* root);
        void treeTraversal(treeNode* root);
        void searchTree(treeNode* root);
        int calculateDepth(treeNode* root, treeNode* target, int depth);
        int calculateHeight(treeNode* root);
        int calculateLength(treeNode* node);


//ALL STRING FUNCTIONS (Ctrl + Click to View Function)
void string(void);
    void printChar();
    void stringLen();
    void concatenate();
    void copyStr();
    void compStr();
    void convertStr(); 
    void searchSub();
    void deleteSub();
    void replaceSub();
    void removeNewLine(char* str);
    int strLength(char temp[]);


//ALL SORTING FUNCTIONS (Ctrl + Click to View Function)
void sortingAlgorithms(void);
    void bubbleSort(void);
        void intBubble(void);
        void charBubble (void);
        void strBubble (void);
    void selectionSort(void);
        void intSelection(void);
        void charSelection(void);
        void strSelection (void);
    void insertionSort(void);
        void intInsertion(void);  
        void charInsertion(void);  
        void strInsertion(void);
    void countingSort(void);
        void intCount(void);
        void charCount(void);
    void mergeSort(void);
        void intMergeSort(void);
        void floatMergeSort(void);
        void charMergeSort(void);
        void intRecursive(int arr[], int left, int right);
        void intMerge(int arr[], int left, int mid, int right);
        void charMerge(char arr[], int left, int mid, int right);
        void charRecursive(char arr[], int left, int right);
    void randomSort(void);
        void intRandomSort(void);
        void randomShuffle(int arr[], int size);
        int isSorted(int arr[], int size);
        void charRandomSort(void);
        int isCharSorted(char arr[], int size);
        void randomCharShuffle(char arr[], int size);   
    void quickSort(void);
        void intQuickSort(void);
            int partitionInt(int arr[], int low, int high);
            void quickSortInt(int arr[], int low, int high);
        void floatQuickSort(void);
            int partitionChar(char arr[], int low, int high);
            void quickSortChar(char arr[], int low, int high);
        void charQuickSort(void);
            void quickSortFloat(float arr[], int low, int high);
            int partitionFloat(float arr[], int low, int high);
    void heapSort(void);
        void intHeapSort(void);
            void heapSortInt(int arr[], int n);
            void heapify(int arr[], int n, int i);
            void swap(int* a, int* b);
        void charHeapSort(void);
            void heapSortChar(char arr[], int n);
            void heapifyChar(char arr[], int n, int i);
            void swapChar(char* a, char* b);
        void floatHeapSort(void);
            void heapSortFloat(float arr[], int n);
            void heapifyFloat(float arr[], int n, int i);
            void swapFloat(float* a, float* b);
    void radixSort(void);
        void intRadix(void);


//SEARCHING ALGORITHMS PROTOTYPES (Ctrl + Click to View Function)
void searchingAlgorithms(void);
	void linearSearch(void);
		void intLS(void);
		void charLS(void);
		void strLS(void);
	void binarySearch(void);
		void intBS(void);
		void charBS(void);
		void strBS(void);
        void intbubSort(int arr[], int n);
        void charbubSort(char arr[], int n); 
        void strbubSort(char *arr[], int n);
        void floatRecursive(float arr[], int left, int right);
        void floatMerge(float arr[], int left, int mid, int right);
        void floatRandomSort(void);
        int isFloatSorted(float arr[], int size);
        void randomFloatShuffle(float arr[], int size);
//functions for aesthetics
void load(void);
void loads (int temp);
void loadFast(void);
void printCenter(char* text);
int tryAgain(void);



int main(){
    //welcome screen
    system("clear"); 
    printf("\n\n\n\n");
    char* text1[] = {
        "|-------------------|", 
        "|- DATA STRUCTURES -|",     
        "|------- AND -------|",
        "|---- ALGORITHMS ---|",
        "|-------------------|"
    };
    for(int i = 0; i < 5; i++) {
        printCenter(text1[i]);
    }
    printf("\n\n\n\n");


    char* text5[] = {
        "MARK L. DELA CRUZ", 
        "BS Computer Science 2-A"
    };
    for(int i = 0; i < 2; i++) {
        printCenter(text5[i]);
    }
    printf("\n");

    printCenter("PRESS ENTER TO CONTINUE.....");
    printf("\n\n\n");


    getchar();

    system("clear"); 
    
    mainMenu();

    return 0;

}

void mainMenu(void) {
    int choice;
    int validInput;
    
    while (1) {  // Infinite loop for retrying until valid input is provided
        printf("\n\n");
        char* text1[] = {
            "|-------------------|", 
            "|---- MAIN MENU ----|", 
            "|-------------------|"
        };
        for(int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n");

        printf("\t1. Linear Data Structure\n\n");
        printf("\t2. Non-Linear Data Structures\n\n");
        printf("\t3. Strings\n\n");
        printf("\t4. Sorting Algorithms\n\n");
        printf("\t5. Searching Algorithms\n\n");
        printf("\t6. Quit Program\n\n");

        printf("\n\n");
        printf("\tEnter the number: ");
        
        validInput = scanf("%d", &choice);

        // Clear the input buffer to prevent invalid characters from causing issues
        while (getchar() != '\n');

        if (validInput != 1) {
            // If input is not an integer
            printf("Invalid input. Please enter a number between 1 and 6.");
			load();
			printf("\n\n");
            system("clear"); 
            continue;  // Restart the loop
        }

        if (choice >= 1 && choice <= 6) {
            // Handle valid choices
            switch (choice) {
                case 1:
                    linearDS();
                    break;
                case 2:
                    nonLinearDS();
                    break;
                case 3:
                    string();
                    break;
                case 4:
                    sortingAlgorithms();
                    break;
                case 5:
                    searchingAlgorithms();
                    break;
                case 6:
                    printf("\tClosing program");
                    load();
                    printf("\n\tTHANK YOU FOR USING DS&A\n\tby Mark Dela Cruz\n\t");
					load();
					system("clear");
                    return; 
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 6.");
            system("clear");
			load();
			printf("\n\n");
        }
    }
}

//LDS MENU
void linearDS(void){
    int choice;
    int validInput;
    while(1){
        system("clear"); 
        printf("\n\n\n\n");
        char* text1[] = {
            "|-------------------|", 
            "|----- LINEAR ------|", 
            "|- DATA STRUCTURES -|", 
            "|-------------------|"
        };
        for(int i = 0; i < 4; i++) {
            printCenter(text1[i]);
        }
        printf("\n");

        char* text3[] = {
            "A data structure where elements are arranged in a", 
            "sequential order, with each element linked to the", 
            "elements in front of and behind it."
        };
        for(int i = 0; i < 3; i++) {
            printCenter(text3[i]);
        }
        printf("\n\n");



        printf("\t1. Arrays\n");
        printf("\t2. Linked lists\n");
        printf("\t3. Stacks\n");
        printf("\t4. Queues\n");
        printf("\t5. Exit\n\n");


        printf("\n\tEnter the number: ");
        
        validInput = scanf("%d", &choice);


        while (getchar() != '\n');

        if (validInput != 1) {

            printf("Invalid input. Please enter a number between 1 and 5.");
			load();
			printf("\n\n");
            system("clear");
            continue; 
        }

        if (choice >= 1 && choice <= 5) {
            switch (choice) {
                case 1:
                    arrays();
                    break;
                case 2: 
                    linkedList();
                    break;
                case 3:
                    stacks();
                    break;
                case 4: 
                    queues();
                    break;
                case 5:
                    printf("\tExiting");
                    load();
                    system("clear"); 
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 5.");
			load();
			printf("\n\n");
            system("clear");
        }
    }
}

void nonLinearDS(void) {
    int choice;
    int validInput;
    while (1) {
        system("clear"); 
        printf("\n\n\n\n");

        char* text1[] ={            
            "|-------------------|",
            "|--- NON  LINEAR ---|", 
            "|- DATA STRUCTURES -|", 
            "|-------------------|", };
        for(int i=0; i<4; i++){
            printCenter(text1[i]);
        }
        printf("\n");
        
        char* text3[] = {"A data structure where elements are organized",
                         "hierarchically or in a graph-like manner, allowing",
                         "multiple paths and relationships between data."};
        for(int i=0; i<3; i++){
            printCenter(text3[i]);
        }       
        printf("\n\n\n");

        printf("\t1. Trees\n");
        printf("\t2. Exit\n\n");

        printf("\n\tEnter the number: ");

        validInput = scanf("%d", &choice);

        while (getchar() != '\n'); // Clear input buffer

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 2.");
            load();
            printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 2) {
            switch (choice) {
                case 1:
                    trees();
                    break;
                case 2:
                    printf("Exiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 2.");
            load();
            printf("\n\n");
            system("clear");
        }
    }
}

/**
 * @brief Menu screen of the string operations
 *  -asks the user on what string operation they want to do.
 * 
 */
void string(void) {
    int choice;
    int validInput;
    while (1) {
        system("clear"); 
        printf("\n\n");

        // ASCII Art or Text for Visual Appeal
        char* text1[]= {
            "|-------------------|", 
            "|----- STRINGS -----|", 
            "|-------------------|"
            }; 
        for(int i=0; i<3; i++){
            printCenter(text1[i]);
        }
        printf("\n\n");
        char* text2[] ={"A data structure that operates on strings", 
                        "with various manipulation operations."};
        for(int i=0; i<2; i++){
            printCenter(text2[i]);
        }
        printf("\n\n");

        // Menu options
        printf("\t1. Print a character\n");
        printf("\t2. String Length\n");
        printf("\t3. Concatenate\n");
        printf("\t4. Copy\n");
        printf("\t5. Compare\n");
        printf("\t6. Convert Case\n");
        printf("\t7. Search for Character/Substring\n");
        printf("\t8. Delete Character/Substring\n");
        printf("\t9. Replace Character/Substring\n");
        printf("\t0. Exit\n");

        // User input
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);

        while (getchar() != '\n'); // Clear input buffer

        if (validInput != 1) {
            printf("\tInvalid input. Please enter a number between 1 and 9.");
            load();
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 9) {
            switch (choice) {
                case 1:
                    printChar();
                    break;
                case 2:
                    stringLen();
                    break;
                case 3:
                    concatenate();
                    break;
                case 4:
                    copyStr();
                    break;
                case 5:
                    compStr();
                    break;
                case 6:
                    convertStr();
                    break;
                case 7:
                    searchSub();
                    break;
                case 8:
                    deleteSub();
                    break;
                case 9:
                    replaceSub();
                    break;
                case 0:
                    printf("\tExiting");
                    load();
                    return; // Exit the function
                    break;
            }
        } else {
            printf("\tInvalid choice. Please enter a number between 1 and 9.");
            load();
            system("clear");
        }
    }
}

/**
 * @brief Prints a single character.
 *
 * This function outputs a single character
 * Prints the character in the index specified by the user
 */
void printChar(){
    system("clear");
    printf("\n\n");
    char* text1[]= {
        "|--------------------------------------|", 
        "|-- PRINTING A CHARACTER IN A STRING --|", 
        "|--------------------------------------|"
        }; 
    for(int i=0; i<3; i++){
        printCenter(text1[i]);
    }
    char* text2[] = {
        "Prints a character from a user-input string at a specified index."
    };
    for(int i = 0; i < 2; i++) {
        printCenter(text2[i]);
    }
    char str[100];
    printf("\n\tPlease enter your string: ");

    fgets(str, sizeof(str), stdin);
    removeNewLine(str);

    int len = strLength(str);
    int index;
    label:
        printf("\n\tEnter the index of the character you want to print(1 to %d): ", len);
        scanf("%d", &index);

        printf("\n\n\tThe character in index %d is '%c", index, str[index-1]);
        char choice;
        while (1) {
            fflush(stdin);
            printf("\n\tEnter another Index?(Y/N): ");    
            scanf(" %c", &choice);
            if (choice == 'Y' || choice == 'y') {
                goto label;
            }
            else{
                printf("\n\n");
                break;
            }
        }
    int try = tryAgain();
    if (try == 1) 
        printChar();
    else 
        system("clear");
}

/**
 * @brief Computes the length of a string.
 *
 * This function calculates the length of a given string by iterating through the characters
 * until it encounters the null-terminating character ('\0').
 * 
 */
void stringLen(){
    system("clear");
    printf("\n\n");
    char* text1[]= {
        "|------------------------|", 
        "|-- LENGTH OF A STRING --|", 
        "|------------------------|"
        }; 
    for(int i=0; i<3; i++){
        printCenter(text1[i]);
    }
    char* text2[] = {
        "Calculates and displays the length of a user-input string."
    };
    for(int i = 0; i < 2; i++) {
        printCenter(text2[i]);
    }

    printf("\n\tPlease enter a string: ");
    char str[100];       
    fgets(str, sizeof(str), stdin);
    removeNewLine(str);
    
    printf("\n\tThe length of your string is: %d", strLength(str));
    int try = tryAgain();
    if (try == 1) 
        stringLen();
    else 
        system("clear");
}


/**
 * @brief Concatenates two strings.
 *
 * This function appends one string to another. It modifies the first string by adding the second
 * string to its end. The concatenation stops at the null-terminator of the first string.
 * 
 */
void concatenate(){
    system("clear");
    printf("\n\n");
    char* text1[]= {
        "|-------------------------|", 
        "|-- CONCATENATE STRINGS --|", 
        "|-------------------------|"
        }; 
    for(int i=0; i<3; i++){
        printCenter(text1[i]);
    }
    char* text2[] = {
        "Concatenates the second string to the first string", 
        "and prints the resulting concatenated string."
    };
    for(int i = 0; i < 2; i++) {
        printCenter(text2[i]);
    }
        int strNum;
    char str1[100];
    char str2[100];

    printf("\n\tPlease enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewLine(str1);

    printf("\n\tPlease enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewLine(str2);

    int len1 = strLength(str1);
    int len2 = strLength(str2);

    char strCon[len1+len2];
    printf("Concatenating Strings");
    load();
    for(int i=0; i<len1; i++){
        strCon[i] = str1[i];
    }
    for(int i=0; i<len2; i++){
        strCon[len1+i] = str2[i];
    }
    strCon[len1+len2] = '\0';
    printf("\n\tThe concatenated string is: %s\n\n", strCon);
    int try = tryAgain();
    if (try == 1) 
        concatenate();
    else 
        system("clear");
}

/**
 * @brief Copies one string into another.
 *
 * This function copies the contents of one string into another, including the null-terminator.
 * The destination string should be large enough to hold the source string.
 * 
 */
void copyStr(){
    system("clear");
    printf("\n\n");
    char* text1[]= {
        "|------------------|", 
        "|-- COPY STRINGS --|", 
        "|------------------|"
        }; 
    for(int i=0; i<3; i++){
        printCenter(text1[i]);
    }
    char* text2[] = {
    "Copies the second string into the first string", 
    "and prints the updated first string."
    };
    for(int i = 0; i < 2; i++) {
        printCenter(text2[i]);
    }
    char str1[100];
    char str2[100];

    printf("\n\tPlease enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewLine(str1);

    printf("\n\tPlease enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewLine(str2);

    int len1 = strLength(str1);
    int len2 = strLength(str2);

    if(len1<len2){
        printf("\n\tBuffer Overload Terminating Program");
        load();
        return;
    }

    printf("\n\tCopying Strings");
    load();       
    for (int i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
    }
    str1[len2] = '\0';


    printf("\n\tThe first string is now: \"%s\" \n\n", str1);

    int try = tryAgain();
    if (try == 1) 
        copyStr();
    else 
        system("clear");
}

/**
 * @brief Compares two strings.
 *
 * This function compares two strings lexicographically, character by character.
 * It returns a value indicating the result of the comparison:
 *   - 0 if the strings are equal,
 *   - A negative value if the first string is lexicographically smaller than the second,
 *   - A positive value if the first string is lexicographically larger than the second.
 * 
 */
void compStr() {
    system("clear");
    printf("\n\n");
    char* text1[] = {
        "|---------------------|", 
        "|-- COMPARE STRINGS --|", 
        "|---------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    printf("\n\n");
    char* text2[] = {
        "Compares two user-input strings", 
        "and prints whether the first is lexicographically",
        "less than, greater than, or equal to the second."
    };
    for(int i = 0; i < 3; i++) {
        printCenter(text2[i]);
    }

    char str1[100];
    char str2[100];

    printf("\n\tPlease enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewLine(str1);

    printf("\n\tPlease enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewLine(str2);

    int result = 0;
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            result = str1[i] - str2[i];
            break;
        }
        i++;
    }

    if (result == 0) {
        result = str1[i] - str2[i];
    }

    if (result < 0) {
        printf("\n\tString: \"%s\" is less than String: \"%s\"\n", str1, str2);
    } else if (result > 0) {
        printf("\n\tString: \"%s\" is greater than String: \"%s\"\n", str1, str2);
    } else {
        printf("\n\tString: \"%s\" is equal to String: \"%s\"\n", str1, str2);
    }

    int retry = tryAgain(); 
    if (retry == 1) {
        concatenate();
    } else {
        system("clear");
    }
}

/**
 * @brief Converts a string to a specific format.
 *
 * This function takes a string and performs certain conversions on it (e.g., lowercase to uppercase).
 * The exact conversion performed depends on the implementation.
 * 
 */
void convertStr() {
    system("clear");
    printf("\n\n");
    char* text1[] = {
        "|--------------------------|", 
        "|-- CONVERT STRING CASES --|", 
        "|--------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    printf("\n\n");

    char* text2[] = {
        "Converts a string to the user-defined case",
        "To lowercase, to uppercase, or to uppercase first character"
    };
    for (int i = 0; i < 2; i++) {
        printCenter(text2[i]);
    }

    char str1[100];
    printf("\n\tPlease enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewLine(str1);

    char choice;
    printf("\n\tConvert to:");
    printf("\n\ta) Uppercase\n\tb) Lowercase\n\tc) Uppercase first character");
    printf("\n\tEnter a letter: ");
    
    scanf(" %c", &choice);

    if (choice == 'a') {
        // Convert to uppercase
        for (int i = 0; str1[i] != '\0'; i++) {
            if (str1[i] >= 'a' && str1[i] <= 'z') {
                str1[i] = str1[i] - 32; // Convert to uppercase
            }
        }
        printf("\n\tConverted string: \"%s\"\n", str1);
    }
    else if (choice == 'b') {
        // Convert to lowercase
        for (int i = 0; str1[i] != '\0'; i++) {
            if (str1[i] >= 'A' && str1[i] <= 'Z') {
                str1[i] = str1[i] + 32; // Convert to lowercase
            }
        }
        printf("\n\tConverted string: \"%s\"\n", str1);
    }
    else if (choice == 'c') {
        // Convert first character to uppercase
        if (str1[0] >= 'a' && str1[0] <= 'z') {
            str1[0] = str1[0] - 32; // Convert first character to uppercase
        }
        printf("\n\tConverted string: \"%s\"\n", str1);
    }
    else {
        printf("\n\tInvalid choice. Please enter a valid option.\n");
    }

    int try = tryAgain();
    if (try == 1) 
        convertStr();
    else 
        system("clear");
}

/**
 * @brief Searches for a substring within a string.
 *
 * This function searches for the first occurrence of a substring within a string.
 * If the substring is found, it prints the index of its first occurrence.
 * If not, it informs the user that the substring was not found.
 * 
 */
void searchSub() {
    system("clear");
    printf("\n\n");

    char text1[][40] = {
        "|----------------------------------|", 
        "|-- SEARCH A CHARACTER/SUBSTRING --|", 
        "|----------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    printf("\n\n");

    char text2[][80] = {
        "Search a character/substring in a string",
        "Prints the index of the first occurance of the substring"
    };
    for (int i = 0; i < 2; i++) {
        printCenter(text2[i]);
    }

    char str1[100];
    char str2[100];
    printf("\n\tPlease enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewLine(str1);

    printf("\n\tPlease enter the character/substring to be searched: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewLine(str2);

    int len1 = strLength(str1);
    int len2 = strLength(str2);
    int found = 0;
    for (int i = 0; i <= len1 - len2; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            printf("\n\tThe substring \"%s\" was found at index %d in the string..\n", str2, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\n\tThe substring \"%s\" was not found in the string.\n", str2);
    }

    int retry = tryAgain();
    if (retry == 1) {
        searchSub();
    } else {
        system("clear");
    }
}

/**
 * @brief Deletes the first occurrence of a substring in a string.
 *
 * This function deletes the first occurrence of a specified substring from a string.
 * The characters following the deleted substring are shifted left to fill the gap.
 * 
 */
void deleteSub() {
    system("clear");
    printf("\n\n");

    char text1[][40] = {
        "|----------------------------------|", 
        "|-- DELETE A CHARACTER/SUBSTRING --|", 
        "|----------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    printf("\n\n");

    char text2[][80] = {
        "Delete the first occurrence of a character/substring from a string",
        "and prints the modified string."
    };
    for (int i = 0; i < 2; i++) {
        printCenter(text2[i]);
    }

    char str1[100];
    char str2[100];
    printf("\n\tPlease enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewLine(str1);

    printf("\n\tPlease enter the character/substring to be deleted: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewLine(str2);

    int len1 = strLength(str1);
    int len2 = strLength(str2);
    int i = 0;

    while (i <= len1 - len2) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            for (int k = i; k < len1 - len2; k++) {
                str1[k] = str1[k + len2];
            }
            str1[len1 - len2] = '\0';
            break;
        }
        i++;
    }

    printf("\n\tModified string: \"%s\"\n", str1);

    int retry = tryAgain();
    if (retry == 1) {
        deleteSub();
    } else {
        system("clear");
    }
}

/**
 * @brief Replaces the first occurrence of a substring in a string.
 *
 * This function replaces the first occurrence of a specified substring in a string
 * with another substring. The function adjusts the size of the string as needed.
 * 
 */
void replaceSub() {
    system("clear");
    printf("\n\n");

    char text1[][40] = {
        "|----------------------------------|", 
        "|-- REPLACE A CHARACTER/SUBSTRING --|", 
        "|----------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    printf("\n\n");

    char text2[][80] = {
        "Replace the first occurrence of a character/substring in a string",
        "with another character/substring."
    };
    for (int i = 0; i < 2; i++) {
        printCenter(text2[i]);
    }

    char str1[100];
    char str2[100];
    char str3[100];
    printf("\n\tPlease enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewLine(str1);

    printf("\n\tPlease enter the character/substring to be replaced: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewLine(str2);

    printf("\n\tPlease enter the replacement character/substring: ");
    fgets(str3, sizeof(str3), stdin);
    removeNewLine(str3);

    int len1 = strLength(str1);
    int len2 = strLength(str2);
    int len3 = strLength(str3);
    int i = 0;

    while (i <= len1 - len2) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            int shift = len3 - len2;
            if (shift > 0) {
                for (int k = len1; k >= i + len2; k--) {
                    str1[k + shift] = str1[k];
                }
            } else if (shift < 0) {
                for (int k = i + len2; k < len1; k++) {
                    str1[k + shift] = str1[k];
                }
            }

            for (int k = 0; k < len3; k++) {
                str1[i + k] = str3[k];
            }

            str1[len1 + shift] = '\0';
            break;
        }
        i++;
    }

    printf("\n\tModified string: \"%s\"\n", str1);

    int retry = tryAgain();
    if (retry == 1) {
        replaceSub();
    } else {
        system("clear");
    }
}

/**
 * @brief Removes the newline character from a string.
 *
 * This function searches for the newline character ('\n') at the end of a string
 * and replaces it with the null-terminator ('\0') to remove the newline.
 * This is commonly used after using `fgets` to remove the newline added by it.
 * 
 * @param str The string from which the newline character is to be removed.
 */
void removeNewLine(char* str){
    size_t length = strLength(str);
    
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; 
    }
}

/**
 * @brief Computes the length of a string.
 *
 * This function calculates the length of a given string by counting the characters until the null-terminator.
 * 
 * @param temp The string whose length is to be calculated.
 * @return The length of the string (excluding the null-terminator).
 */
int strLength(char temp[]){
    int len = 0;
    while(temp[len] != '\0'){
        len++;
    }
    return len;
}




void sortingAlgorithms(void) {
    system("clear"); 
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n");

        // Display title
        char* title[] = {
            "|------------------------|", 
            "|-- SORTING ALGORITHMS --|",
            "|------------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n");

        // Display definition
        char* definition[] = {
            "Sorting algorithms are designed to reorder",
            "elements of a list or array in a specific order.",
            "They are essential for data management and processing.",
            "Different algorithms have varying efficiency based on input."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }

        // Menu options
        printf("\n\t1. Bubble Sort\n");
        printf("\t2. Selection Sort\n");
        printf("\t3. Insertion Sort\n");
        printf("\t4. Counting Sort\n");
        printf("\t5. Merge Sort\n");
        printf("\t6. Random Sort\n");
        printf("\t7. Quicksort\n");
        printf("\t8. HeapSort\n");
        printf("\t9. Radix Sort\n");
        printf("\t0. Exit\n\n");

        printf("\n\tEnter your choice: ");
        
        validInput = scanf("%d", &choice);

        // Clear input buffer
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("\n\tInvalid input. Please enter a number between 0 and 9.");
            load();
            printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 0 && choice <= 9) {
            switch (choice) {
                case 1:
                    bubbleSort();
                    break;
                case 2:
                    selectionSort();
                    break;
                case 3:
                    insertionSort();
                    break;
                case 4:
                    countingSort();
                    break;
                case 5:
                    mergeSort();
                    break;
                case 6:
                    randomSort();
                    break;
                case 7:
                    quickSort();
                    break;
                case 8:
                    heapSort();
                    break;
                case 9:
                    radixSort();
                    break;
                case 0:
                    printf("\n\tExiting...");
                    load();
                    system("clear");
                    return; 
                    break;
            }
        } else {
            printf("\n\tInvalid choice. Please enter a number between 0 and 9.");
            load();
            printf("\n\n");
            system("clear");
        }
    }
}

/*
 * This function provides a menu-driven program for performing insertion sort 
 * on different data types (integers, characters, strings). 
 * Users can select the type of data to sort, and the respective sorting 
 * function is called to handle the input, sorting, and display.
 */
void insertionSort(void) {
    system("clear"); 
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n\n\n");
        char* title[] = {
            "|-----------------------|", 
            "|-- INSERTION SORTING --|",
            "|-----------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "Insertion sort is a simple sorting algorithm that works",
            "by building a sorted array one element at a time.",
            "It is efficient for small data sets or nearly sorted",
            "datasets and operates with an average time complexity of O(n^2)."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Characters\n");
        printf("\t3. Strings\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intInsertion();
                    break;
                case 2:
                    charInsertion();
                    break;
                case 3:
                    strInsertion();
                    break;
                case 4:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return; 
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
        }
    }
}

/*
 * Performs insertion sort on an integer array provided by the user.
 * Displays intermediate steps of sorting and the final sorted array.
 * Allows retrying the process.
 */
void intInsertion(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|------- INSERTION SORT -------|",
        "|-- Sorting an Integer Array --|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }
    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting Insertion Sort");
    load();
    for (int i = 1; i < arrSize; i++) {
        int key = arr[i];
        int j = i - 1;
        printf("\tStep %d:\n", i);
        printf("\tArray before inserting element %d: ", key);
        for (int k = 0; k < arrSize; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printf("\tArray after inserting element %d:  ", key);
        for (int k = 0; k < arrSize; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        intInsertion();
    else 
        system("clear");
}

/*
 * Performs insertion sort on a character array provided by the user.
 */
void charInsertion(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|-------------------------------|", 
        "|------- INSERTION SORT --------|",
        "|-- Sorting a Character Array --|",
        "|-------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of characters: ");
    scanf("%d", &arrSize);
    char arr[arrSize];

    printf("\n\tPlease enter %d characters (one by one):\n", arrSize);
    for (int i = 0; i < arrSize; i++) {
        printf("\tCharacter #%d: ", i + 1);
        scanf(" %c", &arr[i]);
    }
    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    
    printf("\n\n\tStarting Insertion Sort");
    load();
    for (int i = 1; i < arrSize; i++) {
        char key = arr[i];
        int j = i - 1;
        printf("\tStep %d:\n", i);
        printf("\tArray before inserting element '%c': ", key);
        for (int k = 0; k < arrSize; k++) {
            printf("%c ", arr[k]);
        }
        printf("\n");
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printf("\tArray after inserting element '%c':  ", key);
        for (int k = 0; k < arrSize; k++) {
            printf("%c ", arr[k]);
        }
        printf("\n");
    }
    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        charInsertion();
    else 
        system("clear");
}

/*
 * Performs insertion sort on a dynamically allocated string array provided by the user.
 * Displays intermediate steps of sorting and the final sorted array.
 * Frees dynamically allocated memory and allows retrying the process.
 */
void strInsertion(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|------- INSERTION SORT -------|",
        "|--- Sorting a String Array ---|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of strings: ");
    scanf("%d", &arrSize);
    while (getchar() != '\n');
    char** arr = (char**)malloc(arrSize * sizeof(char*));
    if (arr == NULL) {
        printf("\n\tMemory allocation failed. Exiting...\n");
        return;
    }
    printf("\n\tPlease enter %d strings (one per line):\n", arrSize);
    for (int i = 0; i < arrSize; i++) {
        arr[i] = (char*)malloc(100 * sizeof(char));
        if (arr[i] == NULL) {
            printf("\n\tMemory allocation failed. Exiting...\n");
            return;
        }
        printf("\tString #%d: ", i + 1);
        fgets(arr[i], 100, stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }
    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n\tStarting Insertion Sort");
    load();
    for (int i = 1; i < arrSize; i++) {
        char* key = arr[i];
        int j = i - 1;
        printf("\n\tStep %d:\n", i);
        loads(7);
        printf("\tInserting string \"%s\":\n\t", key);
        for (int k = 0; k < arrSize; k++) {
            printf("%s ", arr[k]);
        }
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printf("\n\tAfter inserting string \"%s\":\n\t", key);
        for (int k = 0; k < arrSize; k++) {
            printf("%s ", arr[k]);
        }
        printf("\n");
    }
    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < arrSize; i++) {
        free(arr[i]);
    }
    free(arr);
    int try = tryAgain();
    if (try == 1) 
        strInsertion();
    else 
        system("clear");
}

void bubbleSort(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n");
        char* title[] = {
            "|-----------------|", 
            "|-- BUBBLE SORT --|",
            "|-----------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "Bubble sort is a simple sorting algorithm.",
            "It repeatedly steps through the list, compares adjacent elements,",
            "and swaps them if they are in the wrong order.",
            "Average time complexity: O(n^2)."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Characters\n");
        printf("\t3. Strings\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intBubble();
                    break;
                case 2:
                    charBubble();
                    break;
                case 3:
                    strBubble();
                    break;
                case 4:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
        }
    }
}

void intBubble(void) {
    system("clear");
    printf("\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|-------- BUBBLE SORT ---------|",
        "|-- Sorting an Integer Array --|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }
    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: \n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting Bubble Sort");
    load();

    for (int i = 0; i < arrSize - 1; i++) {
        printf("\n\tStep %d:\n", i + 1);
        loads(7); // Simulate loading time (optional)

        int swapped = 0; // Track if any swaps occurred in this pass
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        printf("\tArray after step %d:\n\t", i + 1);
        for (int k = 0; k < arrSize; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");

        if (!swapped) {
            // If no swaps occurred, the array is already sorted
            break;
        }
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        intBubble();
    else 
        system("clear");
}

void charBubble(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|-------------------------------|", 
        "|-------- BUBBLE SORT ----------|",
        "|-- Sorting a Character Array --|",
        "|-------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of characters: ");
    scanf("%d", &arrSize);
    char arr[arrSize];

    printf("\n\tPlease enter %d characters (one by one):\n", arrSize);
    for (int i = 0; i < arrSize; i++) {
        printf("\tCharacter #%d: ", i + 1);
        scanf(" %c", &arr[i]);
    }

    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: \n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\tStarting Bubble Sort");
    load();

    for (int i = 0; i < arrSize - 1; i++) {
        printf("\n\tStep %d:\n", i + 1);
        loads(7); // Simulate loading time (optional)

        int swapped = 0; // Track if any swaps occurred in this pass
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent characters if they are in the wrong order
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        printf("\tArray after step %d:\n\t", i + 1);
        for (int k = 0; k < arrSize; k++) {
            printf("%c ", arr[k]);
        }
        printf("\n");

        if (!swapped) {
            // If no swaps occurred, the array is already sorted
            break;
        }
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        charBubble();
    else 
        system("clear");
}

void strBubble(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|-------- BUBBLE SORT ---------|",
        "|--- Sorting a String Array ---|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of strings: ");
    scanf("%d", &arrSize);
    while (getchar() != '\n');
    char** arr = (char**)malloc(arrSize * sizeof(char*));
    if (arr == NULL) {
        printf("\n\tMemory allocation failed. Exiting...\n");
        return;
    }
    printf("\n\tPlease enter %d strings (one per line):\n", arrSize);
    for (int i = 0; i < arrSize; i++) {
        arr[i] = (char*)malloc(100 * sizeof(char));
        if (arr[i] == NULL) {
            printf("\n\tMemory allocation failed. Exiting...\n");
            return;
        }
        printf("\tString #%d: ", i + 1);
        fgets(arr[i], 100, stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }

    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n\tStarting Bubble Sort");
    load();

    for (int i = 0; i < arrSize - 1; i++) {
        int swapped = 0; // Track if any swaps occurred during this pass
        printf("\n\tStep %d:\n", i + 1);
        loads(7); // Simulate loading time (optional)

        for (int j = 0; j < arrSize - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap adjacent strings if they are in the wrong order
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        printf("\tArray after step %d:\n\t", i + 1);
        for (int k = 0; k < arrSize; k++) {
            printf("%s ", arr[k]);
        }
        printf("\n");

        if (!swapped) {
            // If no swaps occurred, the array is already sorted
            break;
        }
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n\n");

    for (int i = 0; i < arrSize; i++) {
        free(arr[i]);
    }
    free(arr);

    int try = tryAgain();
    if (try == 1) 
        strBubble();
    else 
        system("clear");
}




void selectionSort(void) {
    system("clear"); 
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n");
        char* title[] = {
            "|-----------------------|", 
            "|-- SELECTION SORTING --|",
            "|-----------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "Selection sort is a simple sorting algorithm.",
            "It repeatedly selects the smallest element from the",
            "unsorted part and moves it to the sorted part.",
            "Average time complexity: O(n^2)."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Characters\n");
        printf("\t3. Strings\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intSelection();
                    break;
                case 2:
                    charSelection();
                    break;
                case 3:
                    strSelection();
                    break;
                case 4:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return; 
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
        }
    }
}
/*
 * Performs selection sort on an integer array.
 */
void intSelection(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|-------------------------------|", 
        "|------- SELECTION SORT --------|",
        "|-- Sorting an Integer Array ---|",
        "|-------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }
    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting Selection Sort");
    load();

    for (int i = 0; i < arrSize - 1; i++) {
        int minIdx = i;
        printf("\n\tStep %d:\n", i + 1);
        loads(7); // Simulate loading time (optional)

        printf("\tMinimum for index %d: ", i);
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        printf("%d\n", arr[minIdx]);

        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }

        printf("\n\tAfter sorting up to index %d:\n\t", i);
        for (int k = 0; k < arrSize; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        intSelection();
    else 
        system("clear");
}

/*
 * Performs selection sort on a character array.
 */
void charSelection(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|-------------------------------|", 
        "|------- SELECTION SORT --------|",
        "|-- Sorting a Character Array --|",
        "|-------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of characters: ");
    scanf("%d", &arrSize);
    char arr[arrSize];

    printf("\n\tPlease enter %d characters (one by one):\n", arrSize);
    for (int i = 0; i < arrSize; i++) {
        printf("\tCharacter #%d: ", i + 1);
        scanf(" %c", &arr[i]);
    }
    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }

    printf("\n\n\tStarting Selection Sort");
    load();

    for (int i = 0; i < arrSize - 1; i++) {
        int minIdx = i;
        printf("\n\tStep %d:\n", i + 1);
        loads(7); // Simulate loading time (optional)

        printf("\tMinimum for index %d: ", i);
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        printf("%c\n", arr[minIdx]);

        if (minIdx != i) {
            char temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }

        printf("\n\tAfter sorting up to index %d:\n\t", i);
        for (int k = 0; k < arrSize; k++) {
            printf("%c ", arr[k]);
        }
        printf("\n");
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        charSelection();
    else 
        system("clear");
}


/*
 * Performs selection sort on a string array.
 * Creates an array of pointers for dynamic memory allocation for string sort
 */
void strSelection(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|------- SELECTION SORT -------|",
        "|--- Sorting a String Array ---|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of strings: ");
    scanf("%d", &arrSize);
    while (getchar() != '\n');
    char** arr = (char**)malloc(arrSize * sizeof(char*));
    if (arr == NULL) {
        printf("\n\tMemory allocation failed. Exiting...\n");
        return;
    }
    printf("\n\tPlease enter %d strings (one per line):\n", arrSize);
    for (int i = 0; i < arrSize; i++) {
        arr[i] = (char*)malloc(100 * sizeof(char));
        if (arr[i] == NULL) {
            printf("\n\tMemory allocation failed. Exiting...\n");
            return;
        }
        printf("\tString #%d: ", i + 1);
        fgets(arr[i], 100, stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }
    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n\tStarting Selection Sort");
    load();
    for (int i = 0; i < arrSize - 1; i++) {
        int minIdx = i;
        printf("\n\tStep %d:\n", i + 1);
        loads(7);
        printf("\tMinimum for index %d: ", i);
        for (int j = i + 1; j < arrSize; j++) {
            if (strcmp(arr[j], arr[minIdx]) < 0) {
                minIdx = j;
            }
        }
        printf("%s\n\t", arr[minIdx]);
        if (minIdx != i) {
            char* temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
        printf("\n\tAfter sorting up to index %d:\n\t", i);
        for (int k = 0; k < arrSize; k++) {
            printf("%s ", arr[k]);
        }
        printf("\n");
    }
    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < arrSize; i++) {
        free(arr[i]);
    }
    free(arr);
    int try = tryAgain();
    if (try == 1) 
        strSelection();
    else 
        system("clear");
    system("clear");
}


/*
 * This function provides a menu-driven program for performing counting sort 
 * on different data types (integers, characters, strings). 
 * Users can select the type of data to sort, and the respective sorting 
 * function is called to handle the input, sorting, and display.
 */
void countingSort(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n");
        char* title[] = {
            "|----------------------|", 
            "|-- COUNTING SORTING --|",
            "|----------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "Counting sort is a non-comparative sorting algorithm that works",
            "by counting the number of occurrences of each distinct element.",
            "It is efficient when the range of input data (k) is not significantly",
            "larger than the number of elements (n).",
            "It operates with an average time complexity of O(n + k)."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Characters\n");
        printf("\t3. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 3.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 3) {
            switch (choice) {
                case 1:
                    intCount();
                    break;
                case 2:
                    charCount();
                    break;
                case 3:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 3.");
            load();
        }
    }
}
void intCount(void) {
    system("clear");
    printf("\n\n");

    char* text1[] = {
        "|--------------------------------|", 
        "|-------- COUNTING SORT ---------|",
        "|--- Sorting an Integer Array ---|",
        "|--------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }

    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: \n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting Counting Sort");
    load();

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    int range = max - min + 1;
    int count[range];
    for (int i = 0; i < range; i++) {
        count[i] = 0;
    }

    printf("\n\tStep 1: Count occurrences of each element\n\t");
    for (int i = 0; i < arrSize; i++) {
        count[arr[i] - min]++;        
        if(i==20){
            printf("\n");
        }
    }
    int g =0;

    for (int i = 0; i < range; i++) {
        printf("%d ", count[i]);
        if(g==20){
            printf("\n\t");
            g = -1;
        }
        g++;
    }
    g=0;
    printf("\n\tStep 2: Modify count array to store cumulative counts\n\t");
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }
    for (int i = 0; i < range; i++) {
        printf("%d ", count[i]);
        if(g==20){
            printf("\n\t");
            g = -1;
        }
        g++;
    }

    int sorted[arrSize];
    printf("\n\tStep 3: Place elements into sorted array\n\t");
    for (int i = arrSize - 1; i >= 0; i--) {
        sorted[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", sorted[i]);
    }

    for (int i = 0; i < arrSize; i++) {
        arr[i] = sorted[i];
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        intCount();
    else 
        system("clear");
}
void charCount(void) {
    system("clear");
    printf("\n\n");

    char* text1[] = {
        "|-------------------------------|", 
        "|-------- COUNTING SORT --------|",
        "|-- Sorting a Character Array --|",
        "|-------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    char arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter character #%d: ", i);
        scanf(" %c", &arr[i - 1]); 
    }

    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: \n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\tStarting Counting Sort");
    load();

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    int range = max - min + 1;
    int count[range];
    for (int i = 0; i < range; i++) {
        count[i] = 0;
    }

    printf("\n\n\tStep 1: Count occurrences of each character\n\t");
    for (int i = 0; i < arrSize; i++) {
        count[arr[i] - min]++;
    }
    for (int i = 0; i < range; i++) {
        printf("%d ", count[i]);
    }

    printf("\n\n\tStep 2: Modify count array to store cumulative counts\n\t");
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }
    for (int i = 0; i < range; i++) {
        printf("%d ", count[i]);
    }

    char sorted[arrSize];
    printf("\n\tStep 3: Place characters into sorted array\n\t");
    for (int i = arrSize - 1; i >= 0; i--) {
        sorted[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", sorted[i]);
    }

    for (int i = 0; i < arrSize; i++) {
        arr[i] = sorted[i];
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        charCount();
    else 
        system("clear");
}


void mergeSort(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n\n\n");
        char* title[] = {
            "|-----------------------|", 
            "|---- MERGE SORTING ----|",
            "|-----------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "Merge sort is a divide-and-conquer algorithm that works",
            "by recursively dividing the input array into two halves,",
            "sorting the halves, and then merging the sorted halves.",
            "It operates with an average time complexity of O(n log n)."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Floating-point numbers\n");
        printf("\t3. Characters\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 5.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 5) {
            switch (choice) {
                case 1:
                    intMergeSort();
                    break;
                case 2:
                    floatMergeSort();
                    break;
                case 3:
                    charMergeSort();
                    break;
                case 4:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
        }
    }
}
void intMergeSort(void) {
    system("clear");
    printf("\n\n");

    char* text1[] = {
        "|--------------------------------|", 
        "|---------- MERGE SORT ----------|",
        "|--- Sorting an Integer Array ---|",
        "|--------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }

    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: \n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting Merge Sort");
    load();

    // Start the recursive merge sort process
    intRecursive(arr, 0, arrSize - 1);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        intMergeSort();
    else 
        system("clear");
}
void intRecursive(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Displaying the division step
        // Recursively divide the array
        intRecursive(arr, left, mid);
        intRecursive(arr, mid + 1, right);

        // Merging the two sorted halves
        intMerge(arr, left, mid, right);

        // Show the array after merging each step
        printf("\tArray after merging left (%d-%d) and right (%d-%d):\n\t", left, mid, mid + 1, right);
        for (int i = left; i <= right; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
void intMerge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void charMergeSort(void) {
    system("clear");
    printf("\n\n");

    char* text1[] = {
        "|--------------------------------|", 
        "|---------- MERGE SORT ----------|",
        "|--- Sorting a Character Array --|",
        "|--------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    char arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter character #%d: ", i);
        while ((getchar()) != '\n'); // Clear the input buffer
        scanf("%c", &arr[i - 1]);
    }

    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: \n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\tStarting Merge Sort");
    load();

    // Start the recursive merge sort process
    charRecursive(arr, 0, arrSize - 1);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        charMergeSort();
    else 
        system("clear");
}
void charRecursive(char arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively divide the array
        charRecursive(arr, left, mid);
        charRecursive(arr, mid + 1, right);

        // Merging the two sorted halves
        charMerge(arr, left, mid, right);

        // Show the array after merging each step
        printf("\tArray after merging left (%d-%d) and right (%d-%d):\n\t", left, mid, mid + 1, right);
        for (int i = left; i <= right; i++) {
            printf("%c ", arr[i]);
        }
        printf("\n");
    }
}
void charMerge(char arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    char L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void floatMergeSort(void) {
    system("clear");
    printf("\n\n");

    char* text1[] = {
        "|--------------------------------|", 
        "|---------- MERGE SORT ----------|",
        "|--- Sorting a Float Array ------|",
        "|--------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    float arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter float #%d: ", i);
        scanf("%f", &arr[i - 1]);
    }

    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: \n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%.4f ", arr[i]);
    }
    printf("\n\tStarting Merge Sort");
    load();

    // Start the recursive merge sort process
    floatRecursive(arr, 0, arrSize - 1);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%.4f ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        floatMergeSort();
    else 
        system("clear");
}
void floatRecursive(float arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively divide the array
        floatRecursive(arr, left, mid);
        floatRecursive(arr, mid + 1, right);

        // Merging the two sorted halves
        floatMerge(arr, left, mid, right);

        // Show the array after merging each step
        printf("\tArray after merging left (%d-%d) and right (%d-%d):\n\t", left, mid, mid + 1, right);
        for (int i = left; i <= right; i++) {
            printf("%.4f ", arr[i]);
        }
        printf("\n");
    }
}
void floatMerge(float arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    float L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void randomSort(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n");
        char* title[] = {
            "|----------------------|", 
            "|--- RANDOM SORTING ---|",
            "|----------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "Random sort is an experimental and inefficient sorting technique.",
            "It repeatedly shuffles the data randomly until the sequence becomes",
            "sorted. Due to its extreme inefficiency, it is rarely used in practice.",
            "It serves as a conceptual or humorous example of sorting.",
            "It operates with an average time complexity of O(n!)."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to random sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Characters\n");
        printf("\t3. Floating-Point Values\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intRandomSort();
                    break;
                case 2:
                    charRandomSort();
                    break;
                case 3:
                    floatRandomSort();
                    break;
                case 4:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
        }
    }
}

void intRandomSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|-------- RANDOM SORT ---------|",
        "|-- Sorting an Integer Array --|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }

    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting Random Sort");
    load();

    int step = 1;
    while (!isSorted(arr, arrSize)) {
        printf("\tStep %d:\n", step++);
        printf("\tArray before random shuffle: ");
        for (int i = 0; i < arrSize; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        randomShuffle(arr, arrSize);

        printf("\tArray after random shuffle:  ");
        for (int i = 0; i < arrSize; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        intRandomSort();
    else 
        system("clear");
}

int isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i])
            return 0; // Not sorted
    }
    return 1; // Sorted
}

void randomShuffle(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int randomIndex = rand() % size;
        int temp = arr[i];
        arr[i] = arr[randomIndex];
        arr[randomIndex] = temp;
    }
}

void charRandomSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|-------------------------------|", 
        "|--------- RANDOM SORT ---------|",
        "|-- Sorting a Character Array --|",
        "|-------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of characters: ");
    scanf("%d", &arrSize);
    char arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter character #%d: ", i);
        while (getchar() != '\n'); // Clear input buffer
        scanf("%c", &arr[i - 1]);
    }

    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\tStarting Random Sort");
    load();

    int step = 1;
    while (!isCharSorted(arr, arrSize)) {
        printf("\tStep %d:\n", step++);
        printf("\tArray before random shuffle: ");
        for (int i = 0; i < arrSize; i++) {
            printf("%c ", arr[i]);
        }
        printf("\n");

        randomCharShuffle(arr, arrSize);

        printf("\tArray after random shuffle:  ");
        for (int i = 0; i < arrSize; i++) {
            printf("%c ", arr[i]);
        }
        printf("\n");
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        charRandomSort();
    else 
        system("clear");
}

int isCharSorted(char arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i])
            return 0; // Not sorted
    }
    return 1; // Sorted
}

void randomCharShuffle(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        int randomIndex = rand() % size;
        char temp = arr[i];
        arr[i] = arr[randomIndex];
        arr[randomIndex] = temp;
    }
}

void floatRandomSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|---------------------------|", 
        "|------- RANDOM SORT -------|",
        "|-- Sorting a Float Array --|",
        "|---------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    float arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%f", &arr[i - 1]);
    }

    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%.4f ", arr[i]);
    }
    printf("\n\tStarting Random Sort");
    load();

    int step = 1;
    while (!isFloatSorted(arr, arrSize)) {
        printf("\tStep %d:\n", step++);
        printf("\tArray before random shuffle: ");
        for (int i = 0; i < arrSize; i++) {
            printf("%.4f ", arr[i]);
        }
        printf("\n");

        randomFloatShuffle(arr, arrSize);

        printf("\tArray after random shuffle:  ");
        for (int i = 0; i < arrSize; i++) {
            printf("%.4f ", arr[i]);
        }
        printf("\n");
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%.4f ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        floatRandomSort();
    else 
        system("clear");
}
int isFloatSorted(float arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i])
            return 0; // Not sorted
    }
    return 1; // Sorted
}

void randomFloatShuffle(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        int randomIndex = rand() % size;
        float temp = arr[i];
        arr[i] = arr[randomIndex];
        arr[randomIndex] = temp;
    }
}


void quickSort(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n");
        char* title[] = {
            "|----------------------|", 
            "|--- QUICK SORTING ----|",
            "|----------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "QuickSort is a highly efficient sorting", 
            "algorithm based on the divide-and-conquer paradigm.",
            "It works by selecting a pivot element and partitioning ",
            "the array into two sub-arrays using a pivot. QuickSort",
            "operates with an average time complexity of O(n log n)."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to quick sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Characters\n");
        printf("\t3. Floating-Point Values\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intQuickSort();
                    break;
                case 2:
                    charQuickSort();
                    break;
                case 3:
                    floatQuickSort();
                    break;
                case 4:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
        }
    }
}
void intQuickSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|-------- QUICK SORT ----------|",
        "|-- Sorting an Integer Array --|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }

    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting QuickSort");
    load();

    quickSortInt(arr, 0, arrSize - 1);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        intQuickSort();
    else 
        system("clear");
}
void quickSortInt(int arr[], int low, int high) {
    if (low < high) {
        int pi = partitionInt(arr, low, high);
        quickSortInt(arr, low, pi - 1);
        quickSortInt(arr, pi + 1, high);
    }
}
int partitionInt(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    printf("\n\tPartitioning array from index %d to index %d (pivot = %d):\n", low, high, pivot);

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    printf("\tArray after partition: ");
    for (int k = low; k <= high; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");

    return (i + 1);
}

void charQuickSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|-------------------------------|", 
        "|-------- QUICK SORT -----------|",
        "|-- Sorting a Character Array --|",
        "|-------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    char arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf(" %c", &arr[i - 1]);
    }

    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\tStarting QuickSort");
    load();

    quickSortChar(arr, 0, arrSize - 1);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        charQuickSort();
    else 
        system("clear");
}
void quickSortChar(char arr[], int low, int high) {
    if (low < high) {
        int pi = partitionChar(arr, low, high);
        quickSortChar(arr, low, pi - 1);
        quickSortChar(arr, pi + 1, high);
    }
}
int partitionChar(char arr[], int low, int high) {
    char pivot = arr[high];
    int i = (low - 1);

    printf("\n\tPartitioning array from index %d to index %d (pivot = '%c'):\n", low, high, pivot);

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    char temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    printf("\tArray after partition: ");
    for (int k = low; k <= high; k++) {
        printf("%c ", arr[k]);
    }
    printf("\n");

    return (i + 1);
}

void floatQuickSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|--------------------------------|", 
        "|--------- QUICK SORT -----------|",
        "|---- Sorting a Float Array -----|",
        "|------------=-------=-----------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    float arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%f", &arr[i - 1]);
    }

    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n\tStarting QuickSort");
    load();

    quickSortFloat(arr, 0, arrSize - 1);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        floatQuickSort();
    else 
        system("clear");
}
void quickSortFloat(float arr[], int low, int high) {
    if (low < high) {
        int pi = partitionFloat(arr, low, high);
        quickSortFloat(arr, low, pi - 1);
        quickSortFloat(arr, pi + 1, high);
    }
}
int partitionFloat(float arr[], int low, int high) {
    float pivot = arr[high];
    int i = (low - 1);

    printf("\n\tPartitioning array from index %d to index %d (pivot = %.2f):\n", low, high, pivot);

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            float temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    float temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    printf("\tArray after partition: ");
    for (int k = low; k <= high; k++) {
        printf("%.2f ", arr[k]);
    }
    printf("\n");

    return (i + 1);
}

void heapSort(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n");
        char* title[] = {
            "|--------------------|", 
            "|--- HEAP SORTING ---|",
            "|--------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "HeapSort is an efficient sorting algorithm", 
            "that uses a binary heap to repeatedly extract",
            "the maximum element and rebuild the heap.",
            "Its time complexity is O(n log n)."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to heap sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Characters\n");
        printf("\t3. Floating-Point Values\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intHeapSort();
                    break;
                case 2:
                    charHeapSort();
                    break;
                case 3:
                    floatHeapSort();
                    break;
                case 4:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
        }
    }
}

void intHeapSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|-------- HEAP SORT -----------|",
        "|-- Sorting an Integer Array --|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }

    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting HeapSort");
    load();

    heapSortInt(arr, arrSize);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        intHeapSort();
    else 
        system("clear");
}

void heapSortInt(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        printf("\n\tSwapping %d with %d\n", arr[i], arr[0]);
        
        heapify(arr, i, 0);

        printf("\tArray after heapifying: ");
        for (int j = 0; j < i; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        printf("\tSwapping %d with %d\n", arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void charHeapSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|-------------------------------|", 
        "|----------- HEAP SORT ---------|",
        "|-- Sorting a Character Array --|",
        "|-------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    char arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf(" %c", &arr[i - 1]);  // Notice the space before %c to handle buffer issues
    }

    system("clear");
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\tStarting HeapSort");
    load();

    heapSortChar(arr, arrSize);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        charHeapSort();
    else 
        system("clear");
}

void heapSortChar(char arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapifyChar(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swapChar(&arr[0], &arr[i]);
        printf("\tSwapping %c with %c\n", arr[i], arr[0]);
        
        heapifyChar(arr, i, 0);

        printf("\tArray after heapifying: ");
        for (int j = 0; j < i; j++) {
            printf("%c ", arr[j]);
        }
        printf("\n");
    }
}

void heapifyChar(char arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swapChar(&arr[i], &arr[largest]);
        printf("\tSwapping %c with %c\n", arr[i], arr[largest]);

        heapifyChar(arr, n, largest);
    }
}

void swapChar(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void floatHeapSort(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|-----------------------------|", 
        "|--------- HEAP SORT ---------|",
        "|--- Sorting a Float Array ---|",
        "|-----------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    float arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%f", &arr[i - 1]);
    }

    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n\tStarting HeapSort");
    load();

    heapSortFloat(arr, arrSize);

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n\n");
    int try = tryAgain();
    if (try == 1) 
        floatHeapSort();
    else 
        system("clear");
}

void heapSortFloat(float arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapifyFloat(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swapFloat(&arr[0], &arr[i]);
        printf("\n\tSwapping %.2f with %.2f\n", arr[i], arr[0]);
        
        heapifyFloat(arr, i, 0);

        printf("\tArray after heapifying: ");
        for (int j = 0; j < i; j++) {
            printf("%.2f ", arr[j]);
        }
        printf("\n");
    }
}

void heapifyFloat(float arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swapFloat(&arr[i], &arr[largest]);
        printf("\tSwapping %.2f with %.2f\n", arr[i], arr[largest]);

        heapifyFloat(arr, n, largest);
    }
}

void swapFloat(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void radixSort(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n");
        char* title[] = {
            "|----------------|", 
            "|-- RADIX SORT --|",
            "|----------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");
        char* definition[] = {
            "RadixSort is a non-comparative sorting algorithm",
            "that processes numbers digit by digit.",
            "It has a time complexity of O(nk),",
            "where n is the number of elements and k is the number of digits."
        };
        for (int i = 0; i < 3; i++) {
            printCenter(definition[i]);
        }
        printf("\n\tWhat type of data would you like to radix sort?\n");
        printf("\t1. Integers\n");
        printf("\t2. Exit\n\n");
        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 2.");
            load();
            continue;
        }

        if (choice >= 1 && choice <= 2) {
            switch (choice) {
                case 1:
                    intRadix();
                    break;
                case 2:
                    printf("\tExiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 2.");
            load();
        }
    }
}
void intRadix(void) {
    system("clear");
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------|", 
        "|-------- RADIX SORT ----------|",
        "|-- Sorting an Integer Array --|",
        "|------------------------------|",
    };
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }
    system("clear");
    printf("\n\n");
    for (int i = 0; i < 4; i++) {
        printCenter(text1[i]);
    }

    printf("\tUnsorted Array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\tStarting Radix Sort (LSD)");
    load();

    int max = arr[0];
    for (int i = 1; i < arrSize; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int exp = 1; max / exp > 0; exp *= 10) {
        int output[arrSize];
        int count[10] = {0};

        for (int i = 0; i < arrSize; i++) {
            count[(arr[i] / exp) % 10]++;
        }

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = arrSize - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        for (int i = 0; i < arrSize; i++) {
            arr[i] = output[i];
        }

        printf("\n\tArray after sorting by digit with exp = %d: ", exp);
        for (int i = 0; i < arrSize; i++) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\tSorting Complete! Sorted Array:\n\t");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int try = tryAgain();
    if (try == 1) 
        intRadix();
    else 
        system("clear");
}


void searchingAlgorithms() {
    system("clear"); 
    int choice;
    int validInput;

    while (1) {
        printf("\n\n\n\n");

        // Display title
        char* title[] = {
            "|--------------------------|", 
            "|-- SEARCHING ALGORITHMS --|",
            "|--------------------------|"
        }; 
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");

        // Display definition
        char* definition[] = {
            "Searching algorithms are designed to retrieve",
            "an element or group of elements from any data",
            "structure efficiently. They are crucial in data",
            "management and processing."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }

        // Menu options
        printf("\n\t1. Linear Search\n");
        printf("\t2. Binary Search\n");
        printf("\t3. Exit\n\n");

        printf("\n\tEnter the number: ");
        
        validInput = scanf("%d", &choice);

        // Clear input buffer
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 3.");
            load();
            printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 3) {
            switch (choice) {
                case 1:
                    // Call the Linear Search function or display its implementation
                    linearSearch();
                    break;
                case 2:
                    // Call the Binary Search function or display its implementation
                    binarySearch();
                    break;
                case 3:
                    printf("Exiting...");
                    load();
                    system("clear");
                    return; 
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 3.");
            load();
            printf("\n\n");
            system("clear");
        }
    }
}

/* Menu and description for linear search */
void linearSearch(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
		system("clear");
        printf("\n\n\n\n");

        // Display title
        char* title[] = {
            "|-------------------|",
            "|-- LINEAR SEARCH --|",
            "|-------------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");

        // Display definition
        char* definition[] = {
            "Linear search is a simple search algorithm that",
            "sequentially checks each element of a data structure",
            "until the desired element is found or the list ends.",
            "It works well for small datasets or unsorted data."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }

        // Menu options
        printf("\n\t1. Search an Integer\n");
        printf("\t2. Search a Character\n");
        printf("\t3. Search a String\n");
        printf("\t4. Exit\n\n");

        printf("\n\tEnter the number: ");

        validInput = scanf("%d", &choice);

        // Clear input buffer
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intLS();
                    break;
                case 2:
                    charLS();
                    break;
                case 3:
                    strLS();
                    break;
                case 4:
                    printf("Exiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
        }
    }
}

/*
* Linearly searching an Integer array
*/
void intLS(void) {
	system("clear");

	// Title display
	printf("\n\n\n");
	char* text1[] = {
		"|-------------------------------------|", 
		"|---- LINEAR SEARCH IN INTEGER ARRAY--|",
		"|-------------------------------------|"
	};
	for (int i = 0; i < 3; i++) {
		printCenter(text1[i]);
	}

	int arrSize, key, found = 0;

	// Step 2: Ask for array size
	printf("\n\n\tPlease enter the number of elements: ");
	scanf("%d", &arrSize);

	// Step 3: Create an integer array of the specified size
	int arr[arrSize];

	// Step 4: Input array elements
	for (int i = 1; i <= arrSize; i++) {
		printf("\tPlease enter element #%d: ", i);
		scanf("%d", &arr[i - 1]);
	}

	// Step 5: Ask the user for the key to search
	printf("\n\tEnter the integer you want to search for: ");
	scanf("%d", &key);

	// Step 6: Linear search
	printf("\n\tSearching");
	load();

	for (int i = 0; i < arrSize; i++) {
		loadFast();
		printf("\tSearching at index #%d: ", i);

		if (arr[i] == key) {
			printf("Key Found!\n");
			printf("\n\tKey %d is found at index #%d.\n", key, i);
			found = 1;
			break;
		} else {
			printf("Key not found.\n");
		}
	}

	if (!found) {
		printf("\n\tKey %d was not found in the array.\n", key);
	}


	int try = tryAgain();
	if (try == 1) 
		intLS();
	else 
		system("clear");
}

/*
* Linearly searching a Character array
*/
void charLS(void) {
    system("clear");

    // Title display
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------------------|", 
        "|---- LINEAR SEARCH IN CHARACTER ARRAY ----|",
        "|------------------------------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize, found = 0;
    char key;


    printf("\n\n\tPlease enter the number of characters: ");
    scanf("%d", &arrSize);


    char arr[arrSize];


    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter character #%d: ", i);
        scanf(" %c", &arr[i - 1]); 
    }

    printf("\n\tEnter the character you want to search for: ");
    scanf(" %c", &key); 


    printf("\n\tSearching");
    load();

    for (int i = 0; i < arrSize; i++) {
        printf("\tSearching at index #%d: ", i);

        if (arr[i] == key) {
            printf("Key Found!\n");
            printf("\n\tKey '%c' is found at index #%d.\n", key, i);
            found = 1;
            break;
        } else {
            printf("Key not found.\n");
        }
    }

    if (!found) {
        printf("\n\tKey '%c' was not found in the array.\n", key);
    }

    int try = tryAgain();
    if (try == 1) 
        charLS();
    else 
        system("clear");
}

/*
* Linearly searching a sString array
*/
void strLS(void) {
    system("clear");

    printf("\n\n\n");
    char* text1[] = {
        "|-----------------------------------|", 
        "|-- LINEAR SEARCH IN STRING ARRAY --|",
        "|-----------------------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize, found = 0;
    char key[100];

    printf("\n\n\tPlease enter the number of strings: ");
    scanf("%d", &arrSize);

    char arr[arrSize][100];

    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter string #%d: ", i);
        scanf(" %[^\n]%*c", arr[i - 1]);
    }

    printf("\n\tEnter the string you want to search for: ");
    scanf(" %[^\n]%*c", key);

    printf("\n\tSearching");
    load();

    for (int i = 0; i < arrSize; i++) {
        printf("\tSearching at index #%d: ", i);
		loadFast();

        if (strcmp(arr[i], key) == 0) {
            printf("Key Found!\n");
            printf("\n\tKey \"%s\" is found at index #%d.\n", key, i);
            found = 1;
            break;
        } else {
            printf("Key not found.\n");
        }
    }

    if (!found) {
        printf("\n\tKey \"%s\" was not found in the array.\n", key);
    }

    int try = tryAgain();
    if (try == 1) 
        strLS();
    else 
        system("clear");
}

/* Menu and description for binary Search*/
void binarySearch() {
    system("clear");
    int choice;
    int validInput;

    while (1) {
		system("clear");
        printf("\n\n\n\n");

        // Display title
        char* title[] = {
            "|-------------------|",
            "|-- BINARY SEARCH --|",
            "|-------------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }
        printf("\n\n");

        // Display definition
        char* definition[] = {
            "Binary search is an efficient algorithm that",
            "finds the position of a target element in a sorted",
            "array. It repeatedly divides the search interval",
            "in half, making it faster than linear search."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(definition[i]);
        }

        // Menu options
        printf("\n\t1. Search an Integer\n");
        printf("\t2. Search a Character\n");
        printf("\t3. Search a String\n");
        printf("\t4. Exit\n\n");

        printf("\n\tEnter the number: ");

        validInput = scanf("%d", &choice);

        // Clear input buffer
        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intBS();
                    break;
                case 2:
                    charBS();
                    break;
                case 3:
                    strBS();
                    break;
                case 4:
					printf("\tExiting");
                    load();
                    system("clear");
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
        }
    }
}

/*
* Binary searching an Integer array
*/
void intBS(void) {
    system("clear");

    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------------|", 
        "|-- BINARY SEARCH IN INTEGER ARRAY --|",
        "|------------------------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize, key, found = 0;

    // Ask for array size
    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);

    // Create an integer array of the specified size
    int arr[arrSize];

    // Input array elements
    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i - 1]);
    }

    // Sort the array (using bubble sort for simplicity)
    intbubSort(arr, arrSize);
    system("clear");
    printf("\n\n\n");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
	printf("\n\tSorting Array");
	load();
    for (int i = 0; i < arrSize; i++) {
        printf("\tIndex #%d: %c\n", i, arr[i]);
    }
    // Ask the user for the key to search
    printf("\n\tEnter the integer you want to search for: ");
    scanf("%d", &key);

    // Binary search
    printf("\n\tSearching");
    load();

    int low = 0, high = arrSize - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        printf("\tSearching at index #%d: ", mid);

        if (arr[mid] == key) {
            printf("Key Found!\n");
            printf("\n\tKey %d is found at index #%d.\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            printf("Key not found, moving right.\n");
            low = mid + 1;
        } else {
            printf("Key not found, moving left.\n");
            high = mid - 1;
        }
    }

    if (!found) {
        printf("\n\tKey %d was not found in the array.\n", key);
    }

    int try = tryAgain();
    if (try == 1) 
        intBS();
    else 
        system("clear");
}

/*
* Binary searching a Character array
*/
void charBS(void) {
    system("clear");

    // Title display
    printf("\n\n\n");
    char* text1[] = {
        "|------------------------------------------|", 
        "|---- BINARY SEARCH IN CHARACTER ARRAY ----|",
        "|------------------------------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize, found = 0;
    char key;

    // Ask for array size
    printf("\n\n\tPlease enter the number of characters: ");
    scanf("%d", &arrSize);

    // Create a character array of the specified size
    char arr[arrSize];

    // Input array elements
    for (int i = 1; i <= arrSize; i++) {
        printf("\tPlease enter character #%d: ", i);
        scanf(" %c", &arr[i - 1]);
    }

    // Sort the array using bubble sort
    charbubSort(arr, arrSize);
	system("clear");
    printf("\n\n\n");

    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
	printf("\n\tSorting Array");
	load();
    for (int i = 0; i < arrSize; i++) {
        printf("\tIndex #%d: %c\n", i, arr[i]);
    }
    // Ask the user for the key to search
    printf("\n\tEnter the character you want to search for: ");
    scanf(" %c", &key);

    // Binary search
    printf("\n\tSearching");
    load();

    int low = 0, high = arrSize - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        printf("\tSearching at index #%d: ", mid);

        if (arr[mid] == key) {
            printf("Key Found!\n");
            printf("\n\tKey '%c' is found at index #%d.\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            printf("Key not found, moving right.\n");
            low = mid + 1;
        } else {
            printf("Key not found, moving left.\n");
            high = mid - 1;
        }
    }

    if (!found) {
        printf("\n\tKey '%c' was not found in the array.\n", key);
    }

    int try = tryAgain();
    if (try == 1) 
        charBS();
    else 
        system("clear");
}

/*
* Binary searching a String array
*/
void strBS(void) {
    system("clear");

    printf("\n\n\n");
    char* text1[] = {
        "|-----------------------------------|", 
        "|-- BINARY SEARCH IN STRING ARRAY --|",
        "|-----------------------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize, found = 0;
    char key[100];

    printf("\n\n\tPlease enter the number of strings: ");
    scanf("%d", &arrSize);

    // Declare an array of string pointers
    char* arr[arrSize];

    for (int i = 1; i <= arrSize; i++) {
        arr[i - 1] = (char*)malloc(100 * sizeof(char));  // Allocate memory for each string
        printf("\tPlease enter string #%d: ", i);
        scanf(" %[^\n]%*c", arr[i - 1]);  // Input the string
    }

	system("clear");
    printf("\n\n\n");

    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    strbubSort(arr, arrSize);
	printf("\n\tSorted Array: \n");
    for (int i = 0; i < arrSize; i++) {
        printf("\tIndex #%d: %s\n", i, arr[i]);
    }
    // Sort the array using bubble sort


    printf("\n\tEnter the string you want to search for: ");
    scanf(" %[^\n]%*c", key);

    printf("\n\tSearching");
    load();

    // Binary Search
    int low = 0, high = arrSize - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;

        printf("\tSearching at index #%d: ", mid);
        loadFast();

        // Compare strings using strcmp
        int cmp = strcmp(arr[mid], key);

        if (cmp == 0) {
            printf("Key Found!\n");
            printf("\n\tKey \"%s\" is found at index #%d.\n", key, mid);
            found = 1;
            break;
        } else if (cmp < 0) {
            printf("Key not found, moving right.\n");
            low = mid + 1;
        } else {
            printf("Key not found, moving left.\n");
            high = mid - 1;
        }
    }

    if (!found) {
        printf("\n\tKey \"%s\" was not found in the array.\n", key);
    }

    int try = tryAgain();
    if (try == 1) 
        strBS();
    else 
        system("clear");
}




//LINEAR DS ACTIONS
void arrays(void){
    system("clear"); 
    int choice;
    int validInput;
    while(1){
        system("clear"); 
        printf("\n\n\n\n");
        char* text1[] = {
            "|-------------------|", 
            "|----- ARRAYS ------|",
            "|-------------------|"
            }; 
        for(int i=0; i<3; i++){
            printCenter(text1[i]);
        }
        printf("\n\n");

        char* text2[] = {
            "Arrays are linear data structure that stores", 
            "a group of elements of the same data type in", 
            "contiguous memory locations."
        };
        for(int i=0; i<3; i++){
            printCenter(text2[i]);
        }

        printf("\t1. Traverse\n");
        printf("\t2. Insert\n");
        printf("\t3. Delete\n");
        printf("\t4. Search\n");
        printf("\t5. Sort\n");
        printf("\t6. Modify\n");
        printf("\t7. Exit\n\n");

        printf("\n\tEnter the number: ");
        
        validInput = scanf("%d", &choice);

        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 7.");
			load();
			printf("\n\n");
            continue;
        }

        if (choice >= 1 && choice <= 7) {
            switch (choice) {
                case 1:
                    arrTraverse();
                    break;
                case 2:
                    arrInsert();
                    break;
                case 3:
                    arrDelete();
                    break;
                case 4:
                    arrSearch();
                    break;
                case 5:
                    arrSort();
                    break;
                case 6:
                    arrModify();
                    break;                    
                case 7:
                    printf("\n\tExiting");
                    load();
                    system("clear");
                    return; 
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 7.");
			load();
			printf("\n\n");
        }
    }

}




void linkedList() {
    system("clear"); 
    int choice;
    int validInput;
    while(1){
        system("clear"); 
        printf("\n\n\n\n");
        char* text1[] = {
            "|--------------------|", 
            "|---- Link Lists ----|",
            "|--------------------|"
            }; 
        for(int i=0; i<3; i++){
            printCenter(text1[i]);
        }
        printf("\n\n");

        char* text2[] = {
            "A linked list is a data structure where", 
            "each object is stored in a node.", 
            "As well as storing data, the node must also",
            "contains a reference/pointer to the node ",
            "containing. The next item of data"
        };
        for(int i=0; i<3; i++){
            printCenter(text2[i]);
        }

        printf("\n\n\t1. Make a Linked list\n");
        printf("\t2. Exit\n");


        printf("\n\tEnter the number: ");
        
        validInput = scanf("%d", &choice);

        while (getchar() != '\n');

        if (validInput != 1) {
            printf("\tInvalid input. Please enter a number between 1 and 2.");
			load();
			printf("\n\n");
            continue;
        }

        if (choice >= 1 && choice <= 2) {
            switch (choice) {
                case 1:
                    makeList();
                    break;
                case 2:
                    printf("\n\tExiting");
                    load();
                    system("clear");
                    return; 
                    break;
                    break;
            }
        }else {
            printf("Invalid choice. Please enter a number between 1 and 2.");
			load();
			printf("\n\n");
        }
    }
}


void makeList(void){
    int num;
    int data;
    int index;
    
    system("clear");
    printf("\n\n\n\n");
    
    char* text1[] = {
        "|--------------------|", 
        "|---- LINK LISTS ----|",
        "|--------------------|"
    };
    
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    
    printf("\n\n");
    printf("\tPlease enter the number of nodes in the list: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("\tInvalid number of nodes. Please enter a positive integer.\n");
        load();
        return;
    }
    
    Node* temp = NULL;
    for (int i = 0; i < num; i++) {
        printf("\tEnter integer data for node %d: ", i + 1);
        scanf("%d", &data);
        
        // Create a new node
        Node* newNode = (Node*)malloc(sizeof(Node));
        if (!newNode) {
            printf("Memory allocation failed.\n");
            return;
        }
        newNode->data = data;
        newNode->nextptr = NULL;
        
        // Add the new node to the list
        if (listHead == NULL) {
            listHead = newNode; // First node becomes the head
        } else {
            temp = listHead;
            while (temp->nextptr != NULL) { // Traverse to the end of the list
                temp = temp->nextptr;
            }
            temp->nextptr = newNode; // Link the new node at the end
        }
    }
    
    printf("\tLinked list created successfully.\n\t");
    load();
    system("clear");
    listOperations(listHead);
}

void listOperations(Node* head){
    int choice, item, locData, index;
    Node* loc;

    while (1) {
        system("clear");

        // Title
        printf("\n\n");
        char* title[] = {
            "|-----------------------|", 
            "|--- LIST OPERATIONS ---|",
            "|-----------------------|"
        };

        for (int i = 0; i < 3; i++) {
            printCenter(title[i]);
        }

        // Current List
        printf("\n\n\tCurrent List:    ");
        Node* temp = head;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->nextptr;
        }
        if (head == NULL) {
            printf("(empty)");
        }
        printf("\n\n");

        // Menu
        printf("\t1. Traverse\n");
        printf("\t2. Search\n");
        printf("\t3. Insert\n");
        printf("\t4. Delete\n");
        printf("\t5. Find Length\n");
        printf("\t6. Reverse\n");
        printf("\t7. Exit\n\n");

        // User Input
        printf("\tEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); // Clear input buffer
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            load();
            continue;
        }

        // Handle Menu Choice
        switch (choice) {
            case 1: // Traverse
                traverseList(head);
                break;
            case 2: // Search
                printf("\tEnter the item to search for: ");
                scanf("%d", &item);
                searchList(head, item);
                break;
            case 3: { // Insert
                printf("\t1. Insert at Beginning\n\t2. Insert After Node\n\tEnter your choice: ");
                int insertChoice;
                scanf("%d", &insertChoice);

                printf("\tEnter the item to insert: ");
                scanf("%d", &item);

                if (insertChoice == 1) {
                    insertAtBeginning(&head, item);
                    traverseList(head);
                } else if (insertChoice == 2) {
                    printf("\tEnter the data of the node after which to insert: ");
                    scanf("%d", &locData);

                    loc = head;
                    while (loc != NULL && loc->data != locData) {
                        loc = loc->nextptr;
                    }

                    if (loc == NULL) {
                        printf("\tNode with data %d not found. Inserting at the beginning.\n", locData);
                    }

                    insertAfterNode(&head, loc, item);
                } else {
                    printf("\tInvalid choice for insertion.\n");
                }
                break;
            }
            case 4: // Delete
                printf("\tEnter the index of the node to delete: ");
                scanf("%d", &index);
                deleteNode(&head, index);
                break;
            case 5: // Find Length
                printf("\tThe length of the list is: %d\n", findLength(head));
                break;
            case 6: // Reverse
                reverseList(&head);
                printf("\tThe list has been reversed.\n");
                break;
            case 7: // Exit
                printf("\tExiting list operations.\n");
                return;
            default:
                printf("\tInvalid choice. Please try again.\n");
        }

        // Pause and Wait for User to Continue
        printf("\n\tPress Enter to continue...");
        while (getchar() != '\n'); // Clear input buffer
        getchar(); // Wait for Enter
    }
}


void traverseList(Node* head) {
    system("clear");
    printf("\n");
    char* title[] = {
            "|-----------------------|", 
            "|--- LIST OPERATIONS ---|",
            "|-----------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(title[i]);  
    }
    Node* ptr = head;

    if (ptr == NULL) {
        printf("\n\tThe list is empty.\n");
        return;
    }
    printf("\n\tUpdated link list: \n");

    // Print header
    printf("\n\t\t----------------------------------------------");
    printf("\n\t\t|    Address     |   Data  |   Next Pointer  |");
    printf("\n\t\t----------------------------------------------\n");

    // Traverse the list
    while (ptr != NULL) {
        printf("\t\t| %10p |  %5d  | %15p |\n", (void*)ptr, ptr->data, (void*)ptr->nextptr);
        ptr = ptr->nextptr;
        loadFast();
    }
    printf("\t\t----------------------------------------------\n");

}

void searchList(Node* head, int item) {
    Node* ptr = head;
    int found = 0;

    traverseList(head);

    while (ptr != NULL) {
        if (ptr->data == item) {
            found = 1;
            break;
        }
        ptr = ptr->nextptr;
    }


    if (found) {
        printf("\tItem %d found at address: %p\n", item, (void*)ptr);
    } else {
        printf("\tItem %d not found in the list.\n", item);
    }
}

int findLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->nextptr;
    }
    return length;
}

void insertAfterNode(Node** head, Node* loc, int item) {
    // Allocate memory for the new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("\tOVERFLOW: Memory allocation failed.\n");
        return;
    }

    // Set the data for the new node
    newNode->data = item;

    // Check if the location is NULL (insert at beginning)
    if (loc == NULL) {
        newNode->nextptr = *head;
        *head = newNode;
        printf("\tNode with data %d inserted at the beginning.\n", item);
    } else {
        // Insert the new node after the given node
        newNode->nextptr = loc->nextptr;
        loc->nextptr = newNode;
        printf("\tNode with data %d inserted after node with data %d.\n", item, loc->data);
    }
    traverseList(*head);
}

// Insert at the beginning of the list
void insertAtBeginning(Node** head, int item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = item;
    newNode->nextptr = *head;
    *head = newNode;

    printf("\tNode with data %d inserted at the beginning.\n", item);
    traverseList(*head); // Display the updated list
}

void deleteNode(Node** head, int index) {
    if (*head == NULL) {
        printf("\tThe list is empty.\n");
        return;
    }

    Node* temp = *head;
    
    // If the index is 0, we delete the head node
    if (index == 0) {
        *head = temp->nextptr; // Update the head pointer
        free(temp); // Free the old head
        printf("\tNode at index %d deleted from the list.\n", index);
        traverseList(*head);
        return;
    }

    // Traverse the list to find the node at the specified index
    Node* prev = NULL;
    int count = 0;
    while (temp != NULL && count < index) {
        prev = temp;
        temp = temp->nextptr;
        count++;
    }

    // If the index is greater than the length of the list
    if (temp == NULL) {
        printf("\tIndex %d is out of bounds.\n", index);
        return;
    }

    // Unlink the node and free memory
    prev->nextptr = temp->nextptr;
    free(temp);
    printf("\tNode at index %d deleted from the list.\n", index);
    traverseList(*head);
}


void reverseList(Node** head) {
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->nextptr; 
        current->nextptr = prev; 
        prev = current;         
        current = next;          
    }

    *head = prev; 
    traverseList(*head);
}




StackNode* createStackNode(int data) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (newNode == NULL) {
        printf("\n\tMemory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void stacks(void) {
    system("clear");
    int choice, validInput;
    while (1) {
        system("clear");
        printf("\n\n\n\n");
        char* text1[] = {
            "|----------------|", 
            "|---- STACKS ----|",
            "|----------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n");

        char* text2[] = {
            "A stack is a data structure that", 
            "follows the LIFO (Last In, First Out)",
            "principle. Elements are added to the top",
            "and removed from the top."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(text2[i]);
        }

        printf("\n\n\t1. Make a stack\n");
        printf("\t2. Exit\n");

        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);

        while (getchar() != '\n'); // Clear input buffer

        if (validInput != 1) {
            printf("\tInvalid input. Please enter a number between 1 and 2.");
            continue;
        }

        if (choice == 1) {
            makeStack();
        } else if (choice == 2) {
            printf("\n\tExiting...\n");
            return;
        } else {
            printf("\n\tInvalid choice. Please enter 1 or 2.\n");
        }
    }
}

void makeStack(void) {
    int num, data;
    system("clear");
    printf("\n\n\n\n");
    char* text1[] = {
        "|---------------|", 
        "|---- STACK ----|",
        "|---------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    printf("\n\n");
    printf("\tPlease enter the number of elements in the stack: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("\tInvalid number of nodes. Please enter a positive integer.\n");
        return;
    }

    StackNode* stack = NULL;
    for (int i = 0; i < num; i++) {
        printf("\tPlease enter stack element #%d: ", i + 1);
        if (scanf("%d", &data) != 1) {
            printf("\tInvalid input. Please enter an integer.\n");
            while (getchar() != '\n');
            i--; // Retry current index
            continue;
        }
        push(&stack, data);
    }

    printf("\n\tStack created successfully.\n");
    stackOperations(&stack);
    freeStack(&stack);
}

void push(StackNode** top, int data) {
    StackNode* newNode = createStackNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("\n\tPushed %d onto the stack.\n", data);
}

int pop(StackNode** top) {
    if (*top == NULL) {
        printf("\n\tStack is empty. Stack UNDERFLOW.\n");
        return -1;
    }
    StackNode* temp = *top;
    int popped = temp->data;
    *top = (*top)->next;
    free(temp);
    return popped;
}

int peek(StackNode* top) {
    if (top == NULL) {
        printf("\n\tStack is empty.\n");
        return -1;
    }
    return top->data;
}

int isEmpty(StackNode* top) {
    return top == NULL;
}

void stackOperations(StackNode** stack) {
    int choice, element;
    while (1) {
        system("clear");
        printf("\n\n");
        char* text1[] = {
            "|---------------|", 
            "|---- STACK ----|",
            "|---------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n\tCurrent Stack:\n\n\t|");
        StackNode* temp = *stack;
        if (temp == NULL) {
            printf("    Empty Stack    |");
        } else {
            while (temp != NULL) {
                printf(" %-4d |", temp->data);
                temp = temp->next;
                loadFast();
            }
        }

        printf("\n\n\n\t1. Push\n");
        printf("\t2. Pop\n");
        printf("\t3. Peek\n");
        printf("\t4. IsEmpty\n");
        printf("\t5. Exit\n\n");

        printf("\tEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            // Clear invalid input
            while (getchar() != '\n');
            printf("\n\tInvalid input. Please enter a number.\n");
            printf("\n\tPress Enter to continue...");
            while (getchar() != '\n'); // Wait for the user to press Enter
            continue;
        }

        switch (choice) {
            case 1:
                printf("\n\tEnter the integer to push: ");
                if (scanf("%d", &element) != 1) {
                    while (getchar() != '\n');
                    printf("\n\tInvalid input.\n");
                    printf("\n\tPress Enter to continue...");
                    while (getchar() != '\n');
                    continue;
                }
                push(stack, element);
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n');
                break;
            case 2:
                element = pop(stack);
                if (element != -1) {
                    printf("\n\tPopped: %d\n", element);
                }
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n'); // Wait for the user to press Enter
                break;
            case 3:
                element = peek(*stack);
                if (element != -1) {
                    printf("\n\tTop element: %d\n", element);
                }
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n'); // Wait for the user to press Enter
                break;
            case 4:
                if (isEmpty(*stack)) {
                    printf("\n\tStack is empty.\n");
                } else {
                    printf("\n\tStack is not empty.\n");
                }
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n'); // Wait for the user to press Enter
                break;
            case 5:
                printf("\n\tExiting stack operations...\n");
                return;
            default:
                printf("\n\tInvalid choice.\n");
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n'); // Wait for the user to press Enter
        }
        // Ensure input buffer is clear before next iteration
        while (getchar() != '\n');
    }
}






void queues(void) {
    system("clear");
    int choice, validInput;
    while (1) {
        system("clear");
        printf("\n\n\n\n");
        char* text1[] = {
            "|-----------------|", 
            "|----- QUEUES ----|",
            "|-----------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n");

        char* text2[] = {
            "A queue is a data structure that",
            "follows the FIFO (First In, First Out)",
            "principle. Elements are added to the rear",
            "and removed from the front."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(text2[i]);
        }

        printf("\n\n\t1. Make a queue\n");
        printf("\t2. Exit\n");

        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);

        while (getchar() != '\n');

        if (validInput != 1) {
            printf("\tInvalid input. Please enter a number between 1 and 2.");
            continue;
        }

        if (choice == 1) {
            int capacity;
            printf("\n\tEnter the capacity of the queue: ");
            if (scanf("%d", &capacity) != 1 || capacity <= 0) {
                printf("\n\tInvalid capacity. Please enter a positive integer.\n");
                while (getchar() != '\n');
                continue;
            }
            Queue* queue = createQueue(capacity);
            queueOperations(queue);
            freeQueue(queue);
        } else if (choice == 2) {
            printf("\n\tExiting...\n");
            return;
        } else {
            printf("\n\tInvalid choice. Please enter 1 or 2.\n");
        }
    }
}

QueueNode* createQueueNode(int data) {
    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    if (newNode == NULL) {
        printf("\n\tMemory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Queue* createQueue(int capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    if (queue == NULL) {
        printf("\n\tMemory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    queue->front = queue->rear = NULL;
    queue->size = 0;
    queue->capacity = capacity;
    return queue;
}

void enqueue(Queue* queue, int data) {
    if (queue->size == queue->capacity) {
        printf("\n\tQueue is full. Cannot enqueue %d.\n", data);
        return;
    }
    QueueNode* newNode = createQueueNode(data);
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    queue->size++;
    printf("\n\tEnqueued %d to the queue.\n", data);
    loadFast();
}

int dequeue(Queue* queue) {
    if (queue->front == NULL) {
        printf("\n\tQueue is empty. Queue UNDERFLOW.\n");
        return -1;
    }
    QueueNode* temp = queue->front;
    int dequeued = temp->data;
    queue->front = queue->front->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(temp);
    queue->size--;
    return dequeued;
}

int isQueueEmpty(Queue* queue) {
    return queue->size == 0;
}

int isQueueFull(Queue* queue) {
    return queue->size == queue->capacity;
}

int peekQueue(Queue* queue) {
    if (queue->front == NULL) {
        printf("\n\tQueue is empty.\n");
        return -1;
    }
    return queue->front->data;
}

int getQueueSize(Queue* queue) {
    return queue->size;
}

void freeQueue(Queue* queue) {
    while (!isQueueEmpty(queue)) {
        dequeue(queue);
    }
    free(queue);
}

void queueOperations(Queue* queue) {
    int choice, element;
    while (1) {
        system("clear");
        printf("\n\n");
        char* text1[] = {
            "|--------------------------|", 
            "|---- QUEUE OPERATIONS ----|",
            "|--------------------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n\tCurrent Queue:\n\n\t|");
        QueueNode* temp = queue->front;
        if (temp == NULL) {
            printf("    Empty Queue    |");
        } else {
            while (temp != NULL) {
                printf(" %-4d |", temp->data);
                temp = temp->next;
                loadFast();
            }
        }

        printf("\n\n\n\t1. Enqueue\n");
        printf("\t2. Dequeue\n");
        printf("\t3. Peek\n");
        printf("\t4. IsEmpty\n");
        printf("\t5. IsFull\n");
        printf("\t6. Size\n");
        printf("\t7. Exit\n\n");

        printf("\tEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("\n\tInvalid input. Please enter a number.\n");
            printf("\n\tPress Enter to continue...");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("\n\tEnter the integer to enqueue: ");
                if (scanf("%d", &element) != 1) {
                    while (getchar() != '\n');
                    printf("\n\tInvalid input.\n");
                    printf("\n\tPress Enter to continue...");
                    while (getchar() != '\n');
                    continue;
                }
                enqueue(queue, element);
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n');
                break;
            case 2:
                element = dequeue(queue);
                if (element != -1) {
                    printf("\n\tDequeued: %d\n", element);
                }
                loadFast();
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n');
                break;
            case 3:
                element = peekQueue(queue);
                if (element != -1) {
                    printf("\n\tFront element: %d\n", element);
                }
                loadFast();
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n');
                break;
            case 4:
                if (isQueueEmpty(queue)) {
                    printf("\n\tQueue is empty.\n");
                } else {
                    printf("\n\tQueue is not empty.\n");
                }
                loadFast();
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n');
                break;
            case 5:
                if (isQueueFull(queue)) {
                    printf("\n\tQueue is full.\n");
                } else {
                    printf("\n\tQueue is not full.\n");
                }
                loadFast();
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n');
                break;
            case 6:
                printf("\n\tQueue size: %d\n", getQueueSize(queue));
                loadFast();
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n');
                break;
            case 7:
                printf("\n\tExiting queue operations");
                load();
                return;
            default:
                printf("\n\tInvalid choice.\n");
                printf("\n\tPress Enter to continue...");
                while (getchar() != '\n');
        }
        while (getchar() != '\n');
    }
}


//NON-LINEAR DATA STRUCTURES




void trees(void) {
    system("clear");
    int choice, validInput;
    treeNode* root = NULL;

    while (1) {
        system("clear");
        printf("\n\n\n\n");
        char* text1[] = {
            "|-----------------|", 
            "|----- TREES -----|",
            "|-----------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n");

        char* text2[] = {
            "A tree is a hierarchical data structure",
            "that consists of nodes connected by edges.",
            "The top node is called the root, and each",
            "node may have child nodes, forming a hierarchy."
        };
        for (int i = 0; i < 4; i++) {
            printCenter(text2[i]);
        }

        printf("\n\n\t1. Create a tree\n");
        printf("\t2. Exit\n");

        printf("\n\tEnter the number: ");
        validInput = scanf("%d", &choice);

        while (getchar() != '\n');

        if (validInput != 1) {
            printf("\tInvalid input. Please enter a number between 1 and 2.\n");
            continue;
        }

        if (choice == 1) {
            makeTree(&root);
        } else if (choice == 2) {
            printf("\n\tExiting...\n");
            return;
        } else {
            printf("\n\tInvalid choice. Please enter 1 or 2.\n");
        }
    }
}

treeNode* createTreeNode(int data) {
    treeNode* newNode = (treeNode*)malloc(sizeof(treeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void makeTree(treeNode** root) {
    system("clear");
    int data, validInput;
    char choice;

    printf("\n\n");
    char* text1[] = {
        "|-----------------------|", 
        "|----- MAKE A TREE -----|",
        "|-----------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }
    printf("\n\n");

    // Create the root node
    printf("\nPlease enter the integer data for the root node (or type 'X' to skip): ");
    validInput = scanf("%d", &data);

    if (validInput == 1) {
        *root = createTreeNode(data);
        printf("\nRoot node created.\n");

        // Create a queue for level-order traversal
        treeNode* queue[100];
        int front = -1, rear = -1;
        queue[++rear] = *root;  // Enqueue the root

        // Start level-order traversal
        while (front != rear) {
            treeNode* current = queue[++front];  // Dequeue a node

            // Handle the left child
            printf("\nEnter data for the left child of %d (or type 'X' to skip): ", current->data);
            while (scanf("%d", &data) != 1) {
                char temp[10];
                if (scanf("%s", temp) == 1 && temp[0] == 'X') {
                    printf("\nLeft child skipped.\n");
                    break;
                } else {
                    printf("\nInvalid input. Please enter an integer or 'X' to skip: ");
                }
            }
            if (validInput == 1) {
                current->left = createTreeNode(data);
                queue[++rear] = current->left;  // Enqueue the left child
            }

            // Handle the right child
            printf("\nEnter data for the right child of %d (or type 'X' to skip): ", current->data);
            while (scanf("%d", &data) != 1) {
                char temp[10];
                if (scanf("%s", temp) == 1 && temp[0] == 'X') {
                    printf("\nRight child skipped.\n");
                    break;
                } else {
                    printf("\nInvalid input. Please enter an integer or 'X' to skip: ");
                }
            }
            if (validInput == 1) {
                current->right = createTreeNode(data);
                queue[++rear] = current->right;  // Enqueue the right child
            }

            // Ask if the user wants to stop adding nodes
            printf("\nDo you want to stop adding nodes and go to tree operations? (Y/N): ");
            while (scanf(" %c", &choice) != 1 || (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')) {
                printf("\nInvalid choice. Please enter 'Y' to stop or 'N' to continue: ");
            }

            if (choice == 'Y' || choice == 'y') {
                printf("\nProceeding to tree operations...\n");
                break;  // Exit the loop to proceed to tree operations
            } else {
                printf("\nAdding more nodes...\n");
            }
        }
    } else {
        while (getchar() != '\n'); // Clear the input buffer if invalid root node data
        printf("\nNo root node created. Proceeding to tree operations");
        load();
    }

    treeOperations(*root);  // Proceed to tree operations after creating the tree
}


treeNode* treeSearch(treeNode* root, int data) {
    if (root == NULL) {
        printf("Tree is empty.\n");
        return NULL;
    }

    treeNode* parent = NULL;
    treeNode* sibling = NULL;
    treeNode* target = NULL;
    int found = 0;
    int queueFront = 0, queueRear = 0;

    // Queue for level-order traversal
    treeNode* queue[100];
    queue[queueRear++] = root;

    // Check if the root itself is the target
    if (root->data == data) {
        target = root;
        found = 1;
    }

    while (queueFront < queueRear && !found) {
        treeNode* current = queue[queueFront++];

        if (current->left) {
            if (current->left->data == data) {
                parent = current;
                sibling = current->right;
                target = current->left;
                found = 1;
            }
            queue[queueRear++] = current->left;
        }

        if (current->right) {
            if (current->right->data == data) {
                parent = current;
                sibling = current->left;
                target = current->right;
                found = 1;
            }
            queue[queueRear++] = current->right;
        }
    }

    if (target != NULL) {
        return target;
    }else{
        printf("\n\tNode with data %d not found.\n", data);
        return NULL;
    }
}

void treeOperations(treeNode* root) {
    while (1) {
        system("clear");
        int data, validInput;
        int choice;

        printf("\n\n");
        char* text1[] = {
            "|-----------------------|", 
            "|--- TREE OPERATIONS ---|",
            "|-----------------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n");

        printf("\n\tTree Operations:\n");
        printf("\t1. Print Tree\n");
        printf("\t2. Insert a Node\n");
        printf("\t3. Delete a Node\n");
        printf("\t4. Search a Node\n");
        printf("\t5. Calculate the Height of a Node\n");
        printf("\t6. Calculate Depth of a Node\n");
        printf("\t7. Height of the Tree\n");
        printf("\t8. Length of the Tree\n");      
        printf("\t9. Traverse the Tree\n");
        printf("\t0. Exit\n");
        printf("\n\tEnter the number: ");
        
        validInput = scanf("%d", &choice);


        while (getchar() != '\n');

        if (validInput != 1) {

            printf("Invalid input. Please enter a number between 1 and 9.");
			load();
			printf("\n\n");
            system("clear");
            continue; 
        }

        if (choice >= 0 && choice <= 9) {
            switch (choice) {
                case 1:
                    system("clear");
                    printf("\n\n\tCurrent Tree: \n");
                    printBinaryTree(root);
                    printf("\n\tPress X to continue..");
                    while (getchar() != 'X');
                    break;
                case 2: 
                    insertNode(&root);
                    break;
                case 3:
                    deleteTreeNode(&root);
                    printf("\n\tPress X to continue..");
                    while (getchar() != 'X');
                    break;
                case 4: 
                    system("clear");
                    for (int i = 0; i < 3; i++){ 
                        printCenter(text1[i]);}
                    searchTree(root);
                    printf("\n\tPress X to continue..");
                    while (getchar() != 'X');
                    break;
                case 5: 
                    int height;
                    printf("\n\tEnter the data of the node: ");
                    scanf("%d", &height);
                    treeNode* temp1 = treeSearch(root, height);
                    printf("\n\tThe height of the node with data %d is: %d", height, calculateHeight(temp1));
                    printf("\n\tPress X to continue..");
                    while (getchar() != 'X');
                    break;
                case 6: 
                    int depth;
                    printf("\n\tEnter the data of the node: ");
                    scanf("%d", &depth);
                    treeNode* temp2 = treeSearch(root, depth);
                    printf("\n\tThe depth of the node with data %d is: %d", depth, calculateDepth(root, temp2, 0));
                    printf("\n\tPress X to continue..");
                    while (getchar() != 'X');
                    break;
                case 7: 
                    printf("\n\tThe height of the tree is: %d", calculateHeight(root));
                    printf("\n\tPress X to continue..");
                    while (getchar() != 'X');
                    break;  
                case 8: 
                    printf("\n\tThe length of the tree is: %d", calculateLength(root)-1);
                    printf("\n\tPress X to continue..");
                    while (getchar() != 'X');
                    break;
                case 9:
                    treeTraversal(root);
                    break;                    
                case 0:
                    printf("\tExiting");
                    load();
                    system("clear"); 
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 8.");
			load();
			printf("\n\n");
            system("clear");
        }
    }
}

void insertNode(treeNode** root) {
    if (root == NULL) return;

    int data;
    printf("\n\tPlease enter the integer data you want to insert: ");
    if (scanf("%d", &data) != 1) {
        printf("\tInvalid input. Please enter a valid integer.\n");
        while (getchar() != '\n');
        return;
    }

    treeNode* newNode = createTreeNode(data);
    if (*root == NULL) {
        *root = newNode;
        printf("\n\tNode inserted as the root of the tree.\n");
        return;
    }

    treeNode* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = *root;

    while (front != rear) {
        treeNode* temp = queue[++front];

        if (temp->left == NULL) {
            temp->left = newNode;
            printf("\n\tNode inserted as left child of %d.\n", temp->data);
            return;
        } else {
            queue[++rear] = temp->left;
        }

        if (temp->right == NULL) {
            temp->right = newNode;
            printf("\n\tNode inserted as right child of %d.\n", temp->data);
            return;
        } else {
            queue[++rear] = temp->right;
        }
    }
}

int calculateDepth(treeNode* root, treeNode* target, int depth) {
    if (root == NULL) return -1;
    if (root == target) return depth;

    int leftDepth = calculateDepth(root->left, target, depth + 1);
    if (leftDepth != -1) return leftDepth;

    return calculateDepth(root->right, target, depth + 1);
}

int calculateLength(treeNode* node) {
    if (node == NULL) return 0;
    return 1 + calculateLength(node->left) + calculateLength(node->right);
}


int calculateHeight(treeNode* root) {
    if (root == NULL) return -1;
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

void searchTree(treeNode* root) {
    if (root == NULL) {
        printf("Tree is empty.\n");
        return;
    }

    int data;
    printf("\n\tPlease enter the integer data you want to search: ");
    if (scanf("%d", &data) != 1) {
        printf("\tInvalid input. Please enter a valid integer.\n");
        while (getchar() != '\n');
        return;
    }

    treeNode* parent = NULL;
    treeNode* sibling = NULL;
    treeNode* target = NULL;
    int found = 0;
    int queueFront = 0, queueRear = 0;

    // Queue for level-order traversal
    treeNode* queue[100];
    queue[queueRear++] = root;

    // Check if the root itself is the target
    if (root->data == data) {
        target = root;
        found = 1;
    }

    while (queueFront < queueRear && !found) {
        treeNode* current = queue[queueFront++];

        if (current->left) {
            if (current->left->data == data) {
                parent = current;
                sibling = current->right;
                target = current->left;
                found = 1;
            }
            queue[queueRear++] = current->left;
        }

        if (current->right) {
            if (current->right->data == data) {
                parent = current;
                sibling = current->left;
                target = current->right;
                found = 1;
            }
            queue[queueRear++] = current->right;
        }
    }

    if (target != NULL) {
        int depth = calculateDepth(root, target, 0);
        int height = calculateHeight(target);

        printf("\tParent: %d\n", parent ? parent->data : 0);
        printf("\tSibling: %d\n", sibling ? sibling->data : 0);
        printf("\tHeight: %d\n", height);
        printf("\tDepth: %d\n", depth);
    } else {
        printf("\n\tNode with data %d not found.\n", data);
    }
}



void deleteTreeNode(treeNode** root) {
    if (*root == NULL) {
        printf("Tree is empty.\n");
        return;
    }

    // If there is only one node (root)
    if ((*root)->left == NULL && (*root)->right == NULL) {
        *root = NULL;  // Set root to NULL
        printf("Only node (root) deleted successfully.\n");
        return;
    }

    treeNode* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = *root;

    treeNode* deepestNode = NULL;
    treeNode* deepestParent = NULL;

    // Perform a level-order traversal to find the deepest node
    while (front != rear) {
        treeNode* current = queue[++front];

        // If this node has a left child, enqueue it
        if (current->left) {
            queue[++rear] = current->left;
            deepestParent = current;  // Track the parent of the deepest node
            deepestNode = current->left;
        }

        // If this node has a right child, enqueue it
        if (current->right) {
            queue[++rear] = current->right;
            deepestParent = current;  // Track the parent of the deepest node
            deepestNode = current->right;
        }
    }

    // Now, set the deepest node to NULL (deleting it conceptually)
    if (deepestParent != NULL) {
        // If the deepest node is the left child of its parent
        if (deepestParent->left == deepestNode) {
            deepestParent->left = NULL;
        }
        // If the deepest node is the right child of its parent
        else {
            deepestParent->right = NULL;
        }
    }

    printf("Deepest node deleted successfully.\n");
}

// Function to print the tree (Preorder Traversal)
void printTree(treeNode* root, int space) {
    if (root == NULL) {
        return; // Simply return when the node is NULL
    }

    // Print current node
    printf("\n");

    // Increase space for the next level
    space += 5;

    // Print the right subtree first
    if (root->right != NULL) {
        printTree(root->right, space);
    }

    // Print current node with appropriate indentation
    for (int i = 5; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);

    // Print the left subtree
    if (root->left != NULL) {
        printTree(root->left, space);
    }
}

void printBinaryTree(treeNode* root) {
    if (root == NULL) {
        printf("\n\tTree is empty or no nodes to display.\n");
    } else {
        printTree(root, 5); 
    }
}

void treeTraversal(treeNode* root){
   while (1) {
        system("clear");
        int data, validInput;
        int choice;

        printf("\n\n");
        char* text1[] = {
            "|----------------------|", 
            "|--- TREE TRAVERSAL ---|",
            "|----------------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n\n");

        printf("\t1. Breadth-First Traversal\n");
        printf("\t2. Depth-First Pre-Order Traversal\n");
        printf("\t3. Depth-First In-Order Traversal\n");
        printf("\t4. Depth-First Post-Order Traversal\n");
        printf("\t5. Exit\n");
        printf("\n\tEnter the number: ");
        
        validInput = scanf("%d", &choice);


        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 5.");
			load();
			printf("\n\n");
            system("clear");
            continue; 
        }

        if (choice >= 1 && choice <= 5) {
            switch (choice) {
                case 1:
                    breadthFirstTraversal(root);
                    break;
                case 2: 
                    preOrderTraversal(root);
                    break;
                case 3:
                    inOrder(root);
                    break;
                case 4: 
                    postOrder(root);
                    break;
                case 5: 
                    printf("\tExiting");
                    load();
                    system("clear"); 
                    return;
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 5.");
			load();
			printf("\n\n");
            system("clear");
        }
    }
}

void breadthFirstTraversal(treeNode* root) {
    if (root == NULL) {
        printf("\tTree is empty.\n");
        return;
    }
    
    treeNode* queue[100];
    int front = -1, rear = -1;
    
    // Enqueue root
    queue[++rear] = root;
    
    printf("\tBreadth-First Traversal:\n\t");
    
    while (front != rear) {
        treeNode* current = queue[++front];  // Dequeue a node
        printf("%d,", current->data);
       
        // Enqueue left child
        if (current->left != NULL) {
            queue[++rear] = current->left;
        }
        
        // Enqueue right child
        if (current->right != NULL) {
            queue[++rear] = current->right;
        }
    }
    
    printf("\n\n\tPress ENTER to return....\n");
    getchar();
}


void depthFirstPreOrderTraversal(treeNode* root) {
    if (root == NULL) {
        return;
    }
    
    printf("%d,", root->data);
    
    depthFirstPreOrderTraversal(root->left);
    depthFirstPreOrderTraversal(root->right);
}

void preOrderTraversal(treeNode* root) {
    printf("\tPre-Order Traversal:\n\t");
    depthFirstPreOrderTraversal(root);
    printf("\n\n\tPress ENTER to return....\n");
    getchar();
}

// In-Order Traversal
void inOrderTraversal(treeNode* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    
    printf("%d,", root->data);

    inOrderTraversal(root->right);
}

void inOrder(treeNode* root) {
    printf("\tIn-Order Traversal:\n\t");
    inOrderTraversal(root);
    printf("\n\n\tPress ENTER to return....\n");
    getchar();
}

// Post-Order Traversal
void postOrderTraversal(treeNode* root) {
    if (root == NULL) {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    
    printf("%d,", root->data);
}

void postOrder(treeNode* root) {
    printf("\tPost-Order Traversal:\n\t");
    postOrderTraversal(root);
    printf("\n\n\tPress ENTER to return....\n");
    getchar();
}

//ARRAY OPERATIONS

void arrTraverse(void) {
    system("clear"); 
    int choice;
    int validInput;
    while(1){
        printf("\n\n\n\n");
        char* text1[] = {
            "|------------------------------|", 
            "|----- TRAVERSE AN ARRAY ------|",
            "|------------------------------|"
            }; 
        for(int i=0; i<3; i++){
            printCenter(text1[i]);
        }
        printf("\n\n");

        printf("Please choose what type on array that you want to traverse.\n\n");

        printf("\t1. Integer Array\n");
        printf("\t2. Character Array\n");
        printf("\t3. String Array\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");
        
        validInput = scanf("%d", &choice);

        while (getchar() != '\n');

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
			load();
			printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intTraverse();
                    break;
                case 2:
                    charTraverse();
                    break;
                case 3:
                    stringTraverse();
                    break;
                case 4:
                    printf("\n\tExiting");
                    load();
                    system("clear");
                    return; 
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
			load();
			printf("\n\n");
            system("clear");
        }
    }
}
void intTraverse(void){
    system("clear"); 
    printf("\n\n\n");
    char* text1[] = {
        "|-------------------------------------|", 
        "|---- TRAVERSING AN INTEGER ARRAY ----|",
        "|-------------------------------------|",
        }; 
    for(int i=0; i<3; i++){
        printCenter(text1[i]);
    }
    int arrSize;

    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    for(int i=1; i<=arrSize; i++){
        printf("\tPlease enter element #%d: ", i);
        scanf("%d", &arr[i-1]);
    }
    printf("\tPrinting the array");
    load();
    printf("\n");
    for(int i=0; i<arrSize; i++){
        printf("\tIndex %d: %d \n", i, arr[i]);
    }
    int try = tryAgain();
    if(try == 1)
        intTraverse();
    else
        system("clear");
}
void charTraverse(void){
    system("clear"); 
    printf("\n\n\n");
    char* text1[] = {
		"|----------------------------------------|", 
        "|----- TRAVERSING A CHARACTER ARRAY -----|",
        "|----------------------------------------|",
        }; 
    for(int i=0; i<3; i++){
        printCenter(text1[i]);
    }
    int arrSize;

    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);

    char arr[arrSize];

    for(int i=0; i<arrSize; i++){
        printf("\tPlease enter element #%d", (i+1));
        scanf("%c", &arr[i]);
    }
    printf("\tPrinting the array");
    load();
    printf("\n\n\n");
    for(int i=0; i<arrSize; i++){
        printf("\tIndex %d: %c \n", i, arr[i]);
    }
    int try = tryAgain();
    if(try == 1)
        charTraverse();
    else
        system("clear");
}
void stringTraverse(void) {
    system("clear"); 
    printf("\n\n\n");
    char* text1[] = {
        "|----------------------------------------|",
        "|---- TRAVERSING AN ARRAY OF STRINGS ----|",
        "|----------------------------------------|"
        }; 
    for(int i=0; i<3    ; i++){
        printCenter(text1[i]);
    }
    int arrSize;

    printf("\n\n\tPlease enter the number of elements: ");
    scanf("%d", &arrSize);  

    
    char** arr = (char**)malloc(arrSize * sizeof(char*));

    for (int i = 0; i < arrSize; i++) {
        arr[i] = (char*)malloc(100 * sizeof(char)); 
        printf("\tPlease enter element #%d: ", i+1);
        scanf("%99s", arr[i]);
        while (getchar() != '\n' && getchar() != EOF);  
    }

    printf("\tPrinting the array");
    load();
    printf("\n");
    for (int i = 0; i < arrSize; i++) {
        printf("\tIndex %d: %s\n", i, arr[i]);
    }

    // Free allocated memory
    for (int i = 0; i < arrSize; i++) {
        free(arr[i]);
    }
    free(arr);

    int try = tryAgain(); 
    if (try == 1) 
        stringTraverse();
    else
        system("clear");
}


void arrInsert(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n\n\n");
        char* text1[] = {
            "|-----------------------------|",
            "|------ INSERT IN ARRAY ------|",
            "|-----------------------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n");

        printf("\tPlease choose what type of array you want to insert into.\n\n");
        printf("\t1. Integer Array\n");
        printf("\t2. Character Array\n");
        printf("\t3. String Array\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");

        validInput = scanf("%d", &choice);

        while (getchar() != '\n'); // Clear the input buffer

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intInsert();
                    break;
                case 2:
                    charInsert();
                    break;
                case 3:
                    stringInsert();
                    break;
                case 4:
                    printf("\n\tExiting");
                    load();
                    system("clear");
                    return;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
        }
    }
}
void intInsert(void) {
    system("clear"); 
    printf("\n");
    char* text1[] = {
        "|-----------------------------------|", 
        "|-- INSERTING IN AN INTEGER ARRAY --|",
        "|-----------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    int arr[max];
    int element, index;

    // Prompt for array size
    printf("\n\n\tPlease enter the number of elements (Max 9): ");
    scanf("%d", &arrSize);

    if (arrSize > max || arrSize < 0) {
        printf("\n\tERROR! Invalid array size. It must be between 1 and %d.\n\t", max - 1);
        load();
        return;
    }

    // Input array elements
    for (int i = 0; i < arrSize; i++) {
        printf("\tPlease enter element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    // Display the current array
    printf("\n\n\tPrinting the array");
    load();
    printf("\n\tElement:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", arr[i]);
    }
    printf("\n\tIndex  :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", i);
    }

    // Get the element to insert and the index
    printf("\n\n\tEnter the element you want to insert: ");
    scanf("%d", &element);

    printf("\n\tEnter the index where you want to place the element: ");
    scanf("%d", &index);

    // Validate the index
    if (index >= 0 && index <= arrSize && arrSize < max) {
        // Shift elements to the right
        for (int i = arrSize; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the element at the given index
        arr[index] = element;
        arrSize++;

        // Display the updated array
        printf("\n\tPrinting the new array");
        load();
        printf("\n\tElement:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", arr[i]);
        }
        printf("\n\tIndex  :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR!\n\tInvalid index or array is already full.\n");
    }
    int try = tryAgain();
    if(try == 1)
        intInsert();
    else
        system("clear");
}
void charInsert(void) {
    system("clear"); 
    printf("\n");
    char* text1[] = {
        "|------------------------------------|", 
        "|-- INSERTING IN A CHARACTER ARRAY --|",
        "|------------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    char arr[max];
    char element;
    int index;

    printf("\n\n\tPlease enter the number of elements (Max %d): ", max - 1);
    scanf("%d", &arrSize);

    if (arrSize >= max || arrSize < 0) {
        printf("\n\tERROR! Invalid array size. It must be between 1 and %d.\n\t", max - 1);
        load();
        return;
    }

    for (int i = 0; i < arrSize; i++) {
        printf("\tPlease enter element #%d: ", i + 1);
        scanf(" %c", &arr[i]);
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    printf("\n\n\tPrinting the array");
    load();
    printf("\n\tElement:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3c", arr[i]);
    }
    printf("\n\tIndex  :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", i);
    }

    printf("\n\n\tEnter the character you want to insert: ");
    scanf(" %c", &element);

    printf("\n\tEnter the index where you want to place the character: ");
    scanf("%d", &index);

    if (index >= 0 && index <= arrSize && arrSize < max) {
        for (int i = arrSize; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        arrSize++;

        printf("\n\tPrinting the new array");
        load();
        printf("\n\tElement:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3c", arr[i]);
        }
        printf("\n\tIndex  :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR!\n\tInvalid index or array is already full.\n");
    }

    int try = tryAgain();
    if (try == 1)
        charInsert();
    else
        system("clear");
}
void stringInsert(void) {
    system("clear"); 
    printf("\n");
    char* text1[] = {
        "|------------------------------------|", 
        "|-- INSERTING IN A STRING ARRAY -----|",
        "|------------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    char arr[max][6]; // Increased size to 6 to allow space for the null terminator
    char element[6];
    int index;

    printf("\n\n\tPlease enter the number of strings (Max %d): ", max - 1);
    scanf("%d", &arrSize);

    if (arrSize >= max || arrSize <= 0) {
        printf("\n\tERROR! Invalid array size. It must be between 1 and %d.\n\t", max - 1);
        load();
        return;
    }

    printf("\n\tNote: Each string should not exceed 5 characters.\n");
    for (int i = 0; i < arrSize; i++) {
        printf("\tPlease enter string #%d: ", i + 1);
        scanf("%s", arr[i]);
        if(strlen(arr[i])>5){
            printf("\tERROR!\n\tString exceeds 5 characters. Operation aborted.");
            load();
            return;
        }
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    printf("\n\n\tPrinting the array");
    load();
    printf("\n\tString:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %6s", arr[i]);
    }
    printf("\n\tIndex :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %6d", i);
    }

    printf("\n\n\tEnter the string you want to insert: ");
    scanf("%5s", element); // Limit input to 5 characters

    if (strlen(element) > 5) {
        printf("\tERROR! String exceeds 5 characters. Operation aborted.\n");
        return;
    }

    printf("\n\tEnter the index where you want to place the string: ");
    scanf("%d", &index);

    if (index >= 0 && index <= arrSize && arrSize < max) {
        for (int i = arrSize; i > index; i--) {
            strcpy(arr[i], arr[i - 1]);
        }
        strcpy(arr[index], element);
        arrSize++;

        printf("\n\tPrinting the new array");
        load();
        printf("\n\tString:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %6s", arr[i]);
        }
        printf("\n\tIndex :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %6d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR!\n\tInvalid index or array is already full.\n");
    }

    int try = tryAgain();
    if (try == 1)
        stringInsert();
    else
        system("clear");
}


void arrDelete(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n\n\n");
        char* text1[] = {
            "|------------------------------|",
            "|------- DELETE IN ARRAY ------|",
            "|------------------------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n");

        printf("\tPlease choose what type of array you want to delete from.\n\n");
        printf("\t1. Integer Array\n");
        printf("\t2. Character Array\n");
        printf("\t3. String Array\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");

        validInput = scanf("%d", &choice);

        while (getchar() != '\n'); // Clear the input buffer

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intDelete();
                    break;
                case 2:
                    charDelete();
                    break;
                case 3:
                    stringDelete();
                    break;
                case 4:
                    printf("\n\tExiting");
                    load();
                    system("clear");
                    return;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
        }
    }
}
void intDelete(void) {
    system("clear"); 
    printf("\n");
    char* text1[] = {
        "|----------------------------------|", 
        "|-- DELETING IN AN INTEGER ARRAY --|",
        "|----------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    int arr[max];
    int index;

    printf("\n\n\tPlease enter the number of elements (Max 10): ");
    scanf("%d", &arrSize);

    if (arrSize > max || arrSize <= 0) {
        printf("\n\tERROR! Invalid array size. The array must have at least 1 element and at most %d.\n\t", max);
        load();
        return;
    }

    // Input array elements
    for (int i = 0; i < arrSize; i++) {
        printf("\tPlease enter element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    // Display the current array
    printf("\n\n\tPrinting the array");
    load();
    printf("\n\tElement:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", arr[i]);
    }
    printf("\n\tIndex  :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", i);
    }

    // Get the index to delete
    printf("\n\n\tEnter the index of the element you want to delete: ");
    scanf("%d", &index);

    // Validate the index
    if (index >= 0 && index < arrSize) {
        // Shift elements to the left
        for (int i = index; i < arrSize - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arrSize--;

        // Display the updated array
        printf("\n\tPrinting the updated array");
        load();
        printf("\n\tElement:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", arr[i]);
        }
        printf("\n\tIndex  :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR!\n\tInvalid index. Please enter a valid index between 0 and %d.\n", arrSize - 1);
    }

    int try = tryAgain();
    if (try == 1)
        intDelete();
    else
        system("clear");
}
void charDelete(void) {
    system("clear"); 
    printf("\n");
    char* text1[] = {
        "|-----------------------------------|", 
        "|-- DELETING IN A CHARACTER ARRAY --|",
        "|-----------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    char arr[max];
    int index;

    printf("\n\n\tPlease enter the number of characters (Max 10): ");
    scanf("%d", &arrSize);

    if (arrSize > max || arrSize <= 0) {
        printf("\n\tERROR! Invalid array size.\n\tThe array must have at least 1 character and at most %d.\n\t", max);
        load();
        return;
    }

    for (int i = 0; i < arrSize; i++) {
        printf("\tPlease enter character #%d: ", i + 1);
        scanf(" %c", &arr[i]);
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    printf("\n\n\tPrinting the array");
    load();
    printf("\n\tCharacter:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3c", arr[i]);
    }
    printf("\n\tIndex    :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", i);
    }

    printf("\n\n\tEnter the index of the character you want to delete: ");
    scanf("%d", &index);

    if (index >= 0 && index < arrSize) {
        for (int i = index; i < arrSize - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arrSize--;

        printf("\n\tPrinting the updated array");
        load();
        printf("\n\tCharacter:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3c", arr[i]);
        }
        printf("\n\tIndex    :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR!\n\tInvalid index. Please enter a valid index between 0 and %d.\n", arrSize - 1);
    }

    int try = tryAgain();
    if (try == 1)
        charDelete();
    else
        system("clear");
}
void stringDelete(void) {
    system("clear"); 
    printf("\n");
    char* text1[] = {
        "|--------------------------------|", 
        "|-- DELETING IN A STRING ARRAY --|",
        "|--------------------------------|"
    }; 
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    char arr[max][6];
    int index;

    printf("\n\n\tPlease enter the number of strings (Max 10): ");
    scanf("%d", &arrSize);

    if (arrSize > max || arrSize <= 0) {
        printf("\n\tERROR! Invalid array size. The array must have at least 1 string and at most %d.\n\t", max);
        load();
        return;
    }

    printf("\n\tNote: Each string should not exceed 5 characters.\n");
    for (int i = 0; i < arrSize; i++) {
        printf("\tPlease enter string #%d: ", i + 1);
        scanf("%s", arr[i]);

        if (strlen(arr[i]) > 5) {
            printf("\tERROR! String exceeds 5 characters. Please enter a valid string.\n");
            i--;
        }
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    printf("\n\n\tPrinting the array");
    load();
    printf("\n\tString:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %6s", arr[i]);
    }
    printf("\n\tIndex :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %6d", i);
    }

    printf("\n\n\tEnter the index of the string you want to delete: ");
    scanf("%d", &index);

    if (index >= 0 && index < arrSize) {
        for (int i = index; i < arrSize - 1; i++) {
            strcpy(arr[i], arr[i + 1]);
        }

        arrSize--;

        printf("\n\tPrinting the updated array");
        load();
        printf("\n\tString:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %6s", arr[i]);
        }
        printf("\n\tIndex :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %6d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR!\n\tInvalid index. Please enter a valid index between 0 and %d.\n", arrSize - 1);
    }

    int try = tryAgain();
    if (try == 1)
        stringDelete();
    else
        system("clear");
}

void arrSearch(void) {
    searchingAlgorithms();
}

void arrSort(void) {
    sortingAlgorithms();
}

void arrModify(void) {
    system("clear");
    int choice;
    int validInput;

    while (1) {
        system("clear");
        printf("\n\n\n\n");
        char* text1[] = {
            "|-------------------------|",
            "|---- MODIFY IN ARRAY ----|",
            "|-------------------------|"
        };
        for (int i = 0; i < 3; i++) {
            printCenter(text1[i]);
        }
        printf("\n\n");

        printf("\tPlease choose the type of array you want to modify.\n\n");
        printf("\t1. Integer Array\n");
        printf("\t2. Character Array\n");
        printf("\t3. String Array\n");
        printf("\t4. Exit\n\n");
        printf("\n\tEnter the number: ");

        validInput = scanf("%d", &choice);

        while (getchar() != '\n'); 

        if (validInput != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            switch (choice) {
                case 1:
                    intModify(); 
                    break;
                case 2:
                    charModify(); 
                    break;
                case 3:
                    stringModify(); 
                    break;
                case 4:
                    printf("\n\tExiting");
                    load();
                    system("clear");
                    return;
            }
        } else {
            printf("Invalid choice. Please enter a number between 1 and 4.");
            load();
            printf("\n\n");
            system("clear");
        }
    }
}
void intModify(void) {
    system("clear");
    printf("\n");
    char* text1[] = {
        "|--------------------------------|",
        "|-- MODIFYING AN INTEGER ARRAY --|",
        "|--------------------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    int arr[max];
    int index, newElement;

    printf("\n\n\tPlease enter the number of elements (Max %d): ", max - 1);
    scanf("%d", &arrSize);

    if (arrSize > max || arrSize <= 0) {
        printf("\n\tERROR! Invalid array size. It must be between 1 and %d.\n", max - 1);
        return;
    }

    printf("\n\tPlease enter the elements:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("\tElement #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    printf("\n\n\tPrinting the current array");
    load();
    printf("\n\tElement:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", arr[i]);
    }
    printf("\n\tIndex  :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", i);
    }

    printf("\n\n\tEnter the index you want to modify: ");
    scanf("%d", &index);

    if (index >= 0 && index < arrSize) {
        printf("\n\tEnter the new element for index %d: ", index);
        scanf("%d", &newElement);
        arr[index] = newElement;

        printf("\n\tPrinting the modified array");
        load();
        printf("\n\tElement:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", arr[i]);
        }
        printf("\n\tIndex  :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR! Invalid index.\n");
    }

    int try = tryAgain();
    if (try == 1) {
        intModify();
    } else {
        system("clear");
    }
}
void charModify(void) {
    system("clear");
    printf("\n");
    char* text1[] = {
        "|---------------------------------|",
        "|-- MODIFYING A CHARACTER ARRAY --|",
        "|---------------------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    char arr[max];
    int index;
    char newElement;

    printf("\n\n\tPlease enter the number of elements (Max %d): ", max - 1);
    scanf("%d", &arrSize);

    if (arrSize > max || arrSize <= 0) {
        printf("\n\tERROR! Invalid array size. It must be between 1 and %d.\n", max - 1);
        return;
    }

    printf("\n\tPlease enter the elements:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("\tElement #%d: ", i + 1);
        scanf(" %c", &arr[i]);
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    printf("\n\n\tPrinting the current array");
    load();
    printf("\n\tElement:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3c", arr[i]);
    }
    printf("\n\tIndex  :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %3d", i);
    }

    printf("\n\n\tEnter the index you want to modify: ");
    scanf("%d", &index);

    if (index >= 0 && index < arrSize) {
        printf("\n\tEnter the new character for index %d: ", index);
        scanf(" %c", &newElement);
        arr[index] = newElement;

        printf("\n\tPrinting the modified array");
        load();
        printf("\n\tElement:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3c", arr[i]);
        }
        printf("\n\tIndex  :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %3d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR! Invalid index.\n");
    }

    int try = tryAgain();
    if (try == 1) {
        charModify();
    } else {
        system("clear");
    }
}
void stringModify(void) {
    system("clear");
    printf("\n");
    char* text1[] = {
        "|------------------------------|",
        "|-- MODIFYING A STRING ARRAY --|",
        "|------------------------------|"
    };
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    int arrSize;
    int max = 10;
    char arr[max][6];
    int index;
    char newElement[5];

    printf("\n\n\tPlease enter the number of strings (Max %d): ", max - 1);
    scanf("%d", &arrSize);

    if (arrSize > max || arrSize <= 0) {
        printf("\n\tERROR! Invalid array size. It must be between 1 and %d.\n", max - 1);
        return;
    }

    printf("\n\tPlease enter the strings:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("\tString #%d: ", i + 1);
        scanf("%s", arr[i]);
    }

    system("clear");
    for (int i = 0; i < 3; i++) {
        printCenter(text1[i]);
    }

    printf("\n\n\tPrinting the current array");
    load();
    printf("\n\tString:");
    for (int i = 0; i < arrSize; i++) {
        printf(" %5s", arr[i]);
    }
    printf("\n\tIndex  :");
    for (int i = 0; i < arrSize; i++) {
        printf(" %5d", i);
    }

    printf("\n\n\tEnter the index you want to modify: ");
    scanf("%d", &index);

    if (index >= 0 && index < arrSize) {
        printf("\n\tEnter the new string for index %d: ", index);
        scanf("%s", newElement);
        if (strlen(newElement) > 5) {
            printf("\tERROR! String exceeds 5 characters.\n");
            load();
            return;
        }
        strcpy(arr[index], newElement);
         

        printf("\n\tPrinting the modified array");
        load();
        printf("\n\tString:");
        for (int i = 0; i < arrSize; i++) {
            printf(" %5s", arr[i]);
        }
        printf("\n\tIndex  :");
        for (int i = 0; i < arrSize; i++) {
            printf(" %5d", i);
        }
        printf("\n\n");
    } else {
        printf("\n\tERROR! Invalid index.\n");
    }

    int try = tryAgain();
    if (try == 1) {
        stringModify();
    } else {
        system("clear");
    }
}

//a function to simulate loading
void load(void){
    int dots = 0;
    while (dots < 6) {
        printf(".");      
        fflush(stdout);     
        for (long i = 0; i < 101000000; i++);
            dots++;
    }
    printf("\n");
}
void loadFast(void){
    int dots = 0;
    while (dots < 5) {          
        for (long i = 0; i < 1010000; i++);
            dots++;
    }
}
void loads(int temp){
    int dots = 0;
    while (dots < temp) {         
        for (long i = 0; i < 1010000; i++);
            dots++;
    }
}


int tryAgain(void) {
    char choice;
    while (1) {
        fflush(stdin);
        printf("\tDo you want to try another?\n\tY/N? ");
        
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y') {
            return 1; 
        } else if (choice == 'N' || choice == 'n') {
            return 0;
        } else {
            system("clear");
            printf("Invalid input. Please try again.");
            load();
        }
    }
}

void printCenter(char* text) {
    int width = 80;  
    int len = strlen(text);


    int padding = (width-len)/2;
    // Print the padding
    for (int i =0; i < padding; i++) {
        printf(" ");
    }
    
    // Print the text
    loadFast();
    printf("%s\n", text);
}


// Function to perform bubble sort on integers
void intbubSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap integers
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform bubble sort on characters
void charbubSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap characters
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void strbubSort(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap strings
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/* FURTHER IMPROVEMENTS
** 1. Deleting Nodes in trees may cause errors
** 2. Limited data types in List, Stacks and Queues
** 3. Inconsistent UI between screens
** 4. Hard to read code. Would be easier to split in multiple files
*/




/*PROGRAM END*/
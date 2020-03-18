// Midterm exam – The C Programming Language, Spring 2020 // (Coding section – 52 points) // POST ALL of this CODE to your theyup12.github.io portfolio. 
// (8 pts) (1) Find any and all mistakes in the following code, and correct them. 
void count() { 
printf("Enter lines of text here: .../n"); int c, n1 = 0; nc = 0, nt = 0, nbackslash = 0; 
while ((c = fgetc(stderr)) != EOF) { 
if (c == ‘\n’) { ++nl; } 
else if (c == '\t') { ++nt; } 
else if (c == '\\') { ++nbackslash; } 
else if (isspace(c)) { ++nc; } 
printf("lines: %d\n", nl); 
printf("tabs: %d\n", nt); 
printf("backslashes: %d\n", nbackslash); 
printf("alphanumeric: %d\n", nc); } 
int main(int argc, const char* argv[]) { 
count(); return 0; } 
// The C Standard Library: Identify the standard library functions that do the following... 
// (3 pts) (2) Find the first character c in a const char* s: __ char* strchr(const char*s, char   c);_____
// (3 pts) (3) Find the length of the prefix of const char* s that has characters in const char* t: ____size_t strspn( const char* s, const char *t);_____
// (3 pts) (4) Terminate a program immediately ______void exit(int t);_______________
// (3 pts) (5) Open the file “midterm.txt” in read mode _____FILE *file = fopen(“midterm.txt”, “p”);______________________ 



// Using pointers, implement each of the following C standard library functions 

size_t strcpy(char* s, const char* t) // (4 pts) (6) 
{ 
    char* p = s;
    while((*s++ = *t++) != ‘\0’ ){ }
    return p;
}
char* strncat(char* s, const char* t, size_t n) // (4 pts) (7) 
{
    char* p = s;
    while(*s != '\0'){++s;}
    while(n-- > 0 && *t != '\0'){
        *s++ = *t++;
    }
    return p;
}
int strcmp(const char* s, const char* t) // (4 pts) (8) 
{
    while(*s != '\0' && *t != '\0' && *s == *t){
        ++s;
        ++t;
    }
    return *s - *t;
}
// PART III: SHORT PROGRAM 
//(20 pts) (9) Fill in the program code below for the square ADT (abstract data type) 
//------ POINT ---------------------------------------------------------------- 
typedef struct point point; 
struct point { double x, y; }; 
//------ SQUARE ----------------------------------------------------------------- 
typedef struct square square; 
struct square { point ul; size_t side; }; 
square* square_init(double ulx, double uly, double side); // TODO 
void square_delete(square* sq); // TODO 
void square_move(square* sq, double x, double y); // TODO 
void square_expandby(square* sq, double expandby); // TODO 
double square_area(square* sq); // TODO 
double square_perimeter(square* r); // TODO 
// print location, side, area and perimeter 
void square_print(const char* msg, square* sq); // TODO 
void test_square(double ulx, double uly, double side) { 
square* sq = square_init(ulx, uly, side); 
square_print(“sq is: “, sq); 
square_move(2, 2); 
square_print(“sq is now: “, sq); 
square_expandby(sq, 10); 
square_print(“sq has expanded to: “, sq); 
square_delete(sq); printf(“\n\n”); 
} 
void tests_square() { 
test_square(0, 0, 10); 
test_square(1, 1, 5); // add other tests if you wish 
// TODO (optional) 
}
int main(int argc, const char* argv[]) { 
tests_square();
 return 0; 
 }
square* square_init(double ulx, double uly, double side)  {
    point *x = ulx;
    point *y = uly; 
}
void square_delete(square* sq)  {
    square *ul = 
}
void square_move(square* sq, double x, double y) {
    square *ul = x;
    square *side = y;
}
void square_expandby(square* sq, double expandby) {

}
double square_area(square* sq)  {
    return pow(*sq, 2);
}
double square_perimeter(square* r) {
    return 4 * r;
}
// print location, side, area and perimeter 
void square_print(const char* msg, square* sq)  {
    double area = square_are(sq);
    int side1 = square *side;
    double perimeter = square_perimeter(sq); 
    printf("side = %6.1d\n area = %6.1d\n, perimeter = %6.1d\n", side, area, perimeter);
}
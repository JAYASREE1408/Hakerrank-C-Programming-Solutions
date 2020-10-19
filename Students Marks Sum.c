

//Complete the following function.
int i, sum,marks[1000000];
char g;
int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    for (int i = (gender == 'g'); i < number_of_students; i += 2) {
        sum += marks[i];
    }
    return sum;
}        


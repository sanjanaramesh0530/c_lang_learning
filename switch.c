int main(){
char grade;
printf("Enter your grade (A, B, C, D, or F): ");
scanf(" %c", &grade);

switch(grade){
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good job!\n");
        break;
    case 'C':
        printf("You passed.\n");
        break;
    case 'D':
        printf("You barely passed.\n");
        break;
    case 'F':
        printf("You failed.\n");
        break;
    default:
        printf("Invalid grade. Please enter A, B, C, D, or F.\n");
}

return 0;
}
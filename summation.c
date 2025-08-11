int marks_summation(int* marks, int number_of_students, char gender) {
  int sum=0;
if(number_of_students>1){
    for(int i=0;i<number_of_students;i++){
        if((gender=='b'&& i%2==0)||(gender=='g' && i%2!=0)){
            sum+=marks[i];
        }
    }
}
else
sum=0;
return sum;
}
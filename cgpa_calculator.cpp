#include<iostream>
using namespace std;

int main()
{
	int sem_num = 0 , num_courses = 0, credit_hrs = 0, total_credit_hrs = 0, overall_credit_hrs = 0;
	string course_name;
	char grade;
	float grade_point = 0.0, total_grade_points = 0.0, sem_grade_points = 0.0, GPA = 0.0, overall_grade_points = 0.0, CGPA = 0.0;
	
	cout<<"\tCumulative Grade Point Average (CGPA) Calculator!"<<endl<<endl;
	
	cout<<"Enter Total Number of Semesters: ";
	cin>>sem_num;
	
	for(int i = 0; i < sem_num; i++){
		cout<<endl<<"\tSemester "<<i + 1<<endl;
		cout<<"\nEnter Number of Courses:" ;
		cin>>num_courses;
		cin.ignore();
		
		sem_grade_points = 0.0;
		total_credit_hrs = 0;
		
		for(int j = 0; j < num_courses; j++){
			cout<<"\nEnter Name of Course "<<j + 1<<": ";
			getline(cin, course_name);
			
			while(true){
				cout<<"Enter Grade Earned: ";
				cin>>grade;
				cin.ignore();
			
			if(grade == 'A+' || grade == 'a+'){
				grade_point = 4.0;
			}
			else if(grade == 'A' || grade =='a'){
				grade_point = 4.0;
			}
			else if(grade == 'A-' || grade == 'a-'){
				grade_point = 3.7;
			}
			else if(grade == 'B+' || grade == 'b+'){
				grade_point = 3.4;
			}
			else if(grade == 'B' || grade == 'b'){
				grade_point = 3.0;
			}
			else if(grade == 'B-' || grade =='b-'){
				grade_point = 2.7;
			}
			else if(grade == 'C+' || grade == 'c+'){
				grade_point = 2.4;
			}
			else if(grade == 'C' || grade == 'c'){
				grade_point = 2.0;
			}
			else if(grade == 'C-' || grade == 'c-'){
				grade_point = 1.7;
			}
			else if(grade == 'D+' || grade == 'd+'){
				grade_point = 1.4;
			}
			else if(grade == 'D' || grade == 'd'){
				grade_point = 1.0;
			}
			else if(grade == 'F' || grade == 'f'){
				grade_point = 0.0;
			}
			else{
				cout<<"Invalid! Please Enter a Valid Grade"<<endl;
				continue;
			}
			break;
		}
		while(true){
			cout<<"Enter Credit Hours: ";
			cin>>credit_hrs;
			
			if(cin.fail() || credit_hrs <=0){
				cin.clear();
				cin.ignore(1000, '\n');
				cout<<"Invalid! Enter a Valid, Positive Integer."<<endl;
				continue;
			}
		}
		cin.ignore();

			
			total_grade_points = grade_point * credit_hrs;
			sem_grade_points += grade_point * credit_hrs;
			total_credit_hrs += credit_hrs;
			
			cout<<"\nGrade Point: "<<grade_point;
			cout<<"\nTotal Grade Points According To Credit Hours: "<<total_grade_points;
			cout<<"\n--------------------------"<<endl;
			
		}
		GPA = sem_grade_points/total_credit_hrs;
		overall_grade_points += sem_grade_points;
		overall_credit_hrs += total_credit_hrs;
		
		cout<<"\nTotal Credit Hours of Semester "<<i +1<<": "<<total_credit_hrs;
		cout<<"\nTotal Grade Points of Semester "<<i +1<<": "<<sem_grade_points;
		cout<<"\nGPA Earned: "<<GPA;
		cout<<"\n--------------------------"<<endl;
	}
	if(overall_credit_hrs > 0){
		CGPA  = overall_grade_points / overall_credit_hrs;
	}
	
	cout<<"CGPA: "<<CGPA<<endl;
	cout << "--------------------------" << endl;
	
	cout<<endl<<"Programmed By: Muneebah Nadeem"<<endl;
	return 0;
}

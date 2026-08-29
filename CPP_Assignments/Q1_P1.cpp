#include<iostream>
using namespace std;

int func1(double readings){
    int statusCode;
    if(readings<0){
        statusCode=-1;
        cout<< "Sensor_Error" << endl;
    }else if(readings>=0 && readings<=29){
        statusCode=0;
        cout << "Normal" << endl;
    }else if(readings>=30 && readings<=44){
        statusCode=1;
        cout<< "warning" << endl;
    }else if(readings>=45 && readings <=59){
        statusCode=2;
        cout<< "Critical" << endl;
    }else if(readings>=60){
        statusCode=3;
        cout<< "Shutdown" <<endl;
    }
    return statusCode;

}

void func2(int statusCode){

   switch(statusCode){
    case -1:
    cout << "Sensor fault-check wining" << endl;
    break;
    case 0:
    cout << "No action required" << endl;
    break;
    case 1:
    cout<< "Alert sent to supervisor"<< endl;
    break;
    case 2:
    cout<<"Cooling system triggered"<< endl;
    break;
    case 3:
    cout << "Emergency shutdown initiated" << endl;
    break;
   }
}



int main(){
    double readings; 
    cout << "Temperature :";
    cin >> readings;
    int result=func1(readings);
    cout << "Status Code : " << result << endl;
    func2(result);

    return 0;

}


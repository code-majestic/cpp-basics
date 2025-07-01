for(int i = 1; i<=5; i++){
    for(int s=1; s<=5-i; s++){
        cout<<"  ";
    }
    int num = i;
    for(int j=1; j<=i; j++){
        cout<<num<<" ";
        num++;
    
    }
    num = i*2-2;
    for(int j=1; j<i; j++){
        cout << num <<" ";
        num--;
    }
    

    cout<<endl;
}
}























    

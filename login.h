void login_h(void){

    char username[15];
    char password[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"Istiaque")==0){
        if(strcmp(password,"123")==0){

        printf("\n Welcome.Login Success");


        }else{
    printf("\n wrong password");
    sleep(5000);
             }
    }else{
    printf("\n User doesn't exist");
    sleep(5000);
         }
     sleep(3);

     system("cls");
}

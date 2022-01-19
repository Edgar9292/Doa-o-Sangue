int main()
{
    int age, dis;
    cout <<"Sua Idade:";
    cin >> age;

    cout<< "Você tem Alguma Doença?" << endl;
    cout<< "1.Não" << endl;
    cout <<"2.Sim" << endl;
    cin >> dis;

    if(age>=18){
        if(dis==1)
            cout<<"Você Pode Doar Sangue!";
        else
            cout<<"Você Não Pode Doar Sangue!";
    }else{
        cout<<"Você Precisa ter 18 Anos ou Mais"
    }
    return 0;
}
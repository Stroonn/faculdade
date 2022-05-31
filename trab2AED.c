void alterar(){
    profissional pro;
    int y;
    char z;

printf("Digite o codigo do usuario que deseja alterar");
scanf("%d", &pro.cod);

if(!verificacod()){
    printf("Digite o novo telefone");
    scanf("%d", &y);
    if(y!='\0'){
        if(z!=pro.tel){
            pro.tel = y;
            }
        }
    printf("Digite o novo endereco");
    scanf("%s", &z);
    if(z!='\0'){
        if(z!=pro.end){
            pro.end = z;
            }
        }
    }
}

// 6º As instruções abaixo resultam em um código válido? Explique o porquê.
// float peso;
// peso = 30;
// cout << peso;
// delete peso;

// O código é inválido porque "delete" é usado para desalocar memória dinâmica em C++, não em C.
// Embora, mesmo que estivesse em C++, seria inválido já que precisaria ter alocado dinamicamente a variável com new, para então retirar o valor.

//Por isso,
//float peso;   -> Válido - inicializa a variável
//peso = 30;    -> Válido - recebe valor
//cout << peso; -> Válido - printa o valor
//delete peso;  -> Inválido  

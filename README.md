<div align="center">

# 🧠 Estrutura de Dados em C

**Exercícios da disciplina de Estrutura de Dados, dos fundamentos da linguagem C até Tipos Abstratos de Dados (TADs) e pilhas.**

![Linguagem](https://img.shields.io/badge/linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Compilador](https://img.shields.io/badge/compilador-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)
![Instituição](https://img.shields.io/badge/UEL-Ci%C3%AAncia%20de%20Dados%20e%20IA-1f6feb?style=for-the-badge)
![Status](https://img.shields.io/badge/status-em%20andamento-success?style=for-the-badge)

</div>

---

## 📖 Sobre o repositório

Este repositório guarda as **listas de exercícios** que resolvi na disciplina de **Estrutura de Dados**, no curso de **Ciência de Dados e Inteligência Artificial** da **Universidade Estadual de Londrina (UEL)**.

As pastas estão na ordem em que os assuntos foram vistos. Cada lista começa onde a anterior terminou:

```
Condicionais ➜ Repetição e Funções ➜ Estruturas Nativas ➜ Ponteiros e Alocação Dinâmica ➜ Modularização e TADs ➜ Pilha Encadeada
```

Todos os programas são escritos em **C padrão** e rodam no terminal, lendo dados com `scanf` e mostrando o resultado com `printf`.

---

## 🗂️ Estrutura do projeto

| # | Pasta | Assunto | Exercícios |
|:-:|-------|---------|:----------:|
| 1 | [`Condicionais_Gustavo_Lopes_Silva`](Condicionais_Gustavo_Lopes_Silva/) | Estruturas condicionais (`if`, `else`, `switch`) | 13 |
| 2 | [`RepeticaoFuncoes_GustavoLopesSilva`](RepeticaoFuncoes_GustavoLopesSilva/RepeticaoFuncoes_GustavoLopesSilva/) | Laços (`for`, `while`, `do-while`) e funções | 14 |
| 3 | [`EstruturasDeDadosNativas_GustavoLopesSilva`](EstruturasDeDadosNativas_GustavoLopesSilva/) | Vetores, matrizes, strings e `struct` | 20 |
| 4 | [`PonteirosAlocacaoDinamica_GustavoLopesSilva`](PonteirosAlocacaoDinamica_GustavoLopesSilva/) | Ponteiros, `malloc` e `free` | 11 |
| 5 | [`ModularizacaoTADPilha_GustavoLopesSilva`](ModularizacaoTADPilha_GustavoLopesSilva/) | Modularização (`.h`/`.c`), TADs e pilha estática | 8 |
| 6 | [`Pilha_EncadeadaAplicacoes_GustavoLopesSilva`](Pilha_EncadeadaAplicacoes_GustavoLopesSilva/) | Pilha encadeada e aplicações *(em andamento)* | — |
| 📚 | [`Prova`](Prova/) | Slides das aulas e listas para estudar para a prova | — |

---

## 🔍 O que tem em cada lista

<details>
<summary><b>1️⃣ Condicionais</b></summary>

<br>

Problemas do dia a dia resolvidos com decisões:

- Taxa de excedente no consumo de água e de energia
- Frete pelo peso da encomenda e pelo valor do pedido, e cálculos com o valor da compra
- Mês por extenso, faixa etária e comparação de datas
- Jogo de **pedra, papel e tesoura**
- Equação do 2º grau (Bhaskara) e tipo de triângulo pelos lados

</details>

<details>
<summary><b>2️⃣ Repetição e Funções</b></summary>

<br>

- Divisores de um número e sequência de **Fibonacci**
- Potência com base real, MDC e MMC
- **Calculadora** com menu
- Leituras que param numa condição (valor negativo, múltiplo de 9…)

</details>

<details>
<summary><b>3️⃣ Estruturas de Dados Nativas</b></summary>

<br>

- **Vetores**: média, contagem, busca e frequência
- **Matrizes**: leitura, impressão, matriz quadrada e **jogo da velha**
- **Strings**: tratamento de frases e listas de nomes
- **Registros (`struct`)**: horário, pontos no plano, produtos, alunos e funcionários

</details>

<details>
<summary><b>4️⃣ Ponteiros e Alocação Dinâmica</b></summary>

<br>

Funções que recebem e devolvem ponteiros e usam memória alocada na hora:

| Função | O que faz |
|--------|-----------|
| `min_max` | Devolve o menor e o maior valor por referência |
| `soma_vetor` | Soma os elementos usando aritmética de ponteiros |
| `busca` | Devolve um ponteiro para o elemento achado |
| `cria_vetor` | Cria um vetor com `malloc` |
| `concatena` | Junta dois vetores num novo vetor dinâmico |
| `transposta` | Cria a matriz transposta (`int **`) |
| `copia_cadeia` / `inverte_cadeia` | Copia e inverte strings |

</details>

<details>
<summary><b>5️⃣ Modularização e TAD Pilha</b></summary>

<br>

Cada exercício separa a **interface** (`.h`) da **implementação** (`.c`) e usa tudo a partir de um `main.c`:

| Exercício | TAD / Aplicação |
|:---------:|-----------------|
| 1 | `Ponto` e `geometria`: cálculos com os vértices de um triângulo |
| 2 | `Fracao`: criação, validação e operações com frações |
| 3 | `ConjuntoInteiros`: conjunto de números inteiros |
| 4 | `Pilha` estática: empilhar, desempilhar e consultar o topo |
| 5 | `Pilha`: `exibirPilha` mostra a pilha sem mudar nada nela |
| 6 | Aplicação: **conversão de decimal para binário** com pilha |
| 7 | Aplicação: **verificar se uma palavra é palíndromo** |
| 8 | `PilhaDupla`: duas pilhas dividindo o mesmo vetor |

</details>

<details>
<summary><b>6️⃣ Pilha Encadeada e Aplicações</b></summary>

<br>

Pilha feita com **nós encadeados** e alocação dinâmica. Assim ela não tem tamanho máximo fixo. A interface está em `exercicio4/pilha.h`, e o enunciado está no PDF da pasta.

</details>

---

## ⚙️ Como compilar e executar

Você precisa de um compilador C, como o **GCC** (no Windows dá para usar [MinGW-w64](https://www.mingw-w64.org/) ou WSL).

**Exercício de um arquivo só:**

```bash
gcc Condicionais_Gustavo_Lopes_Silva/1.c -o programa
./programa
```

**Exercício modularizado (vários `.c`):**

```bash
cd ModularizacaoTADPilha_GustavoLopesSilva/Exercicio7
gcc *.c -o palindromo
./palindromo
```

> 💡 **Dica:** compile com `-Wall -Wextra` para o GCC mostrar todos os avisos.

---

## 🎯 Conceitos praticados

- ✅ Lógica de programação e controle de fluxo
- ✅ Funções, passagem por valor e por referência
- ✅ Vetores, matrizes, strings e registros
- ✅ Ponteiros e aritmética de ponteiros
- ✅ Alocação dinâmica de memória (`malloc`, `free`)
- ✅ Modularização com arquivos de cabeçalho
- ✅ Tipos Abstratos de Dados e encapsulamento (ponteiros opacos)
- ✅ Pilha estática, pilha dupla e pilha encadeada

---

## 👨‍💻 Autor

<div align="center">

### Gustavo Lopes Silva

*Estudante de Ciência de Dados e Inteligência Artificial na UEL*

</div>

Estou no primeiro ano do curso de **Ciência de Dados e Inteligência Artificial** na [Universidade Estadual de Londrina (UEL)](https://www.uel.br) e também faço o curso técnico em **Eletromecânica** no SENAI. Programo em **Python**, **Pandas** e **Scikit-learn**. Meu interesse é usar ciência de dados e IA na **automação industrial** e na **Indústria 4.0**.

### 🎓 Formação

| Curso | Instituição | Período |
|-------|-------------|:-------:|
| Bacharelado em Ciência de Dados e Inteligência Artificial | Universidade Estadual de Londrina (UEL) | 2026 – 2029 |
| Técnico em Eletromecânica | SENAI | 2025 – atual |
| Inglês Avançado (C1) | Wizard | 2021 – atual |

### 🛠️ Habilidades

![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![Pandas](https://img.shields.io/badge/Pandas-150458?style=flat-square&logo=pandas&logoColor=white)
![NumPy](https://img.shields.io/badge/NumPy-013243?style=flat-square&logo=numpy&logoColor=white)
![scikit-learn](https://img.shields.io/badge/scikit--learn-F7931E?style=flat-square&logo=scikit-learn&logoColor=white)
![Plotly](https://img.shields.io/badge/Plotly-3F4F75?style=flat-square&logo=plotly&logoColor=white)
![Matplotlib](https://img.shields.io/badge/Matplotlib-11557c?style=flat-square)
![Seaborn](https://img.shields.io/badge/Seaborn-4c72b0?style=flat-square)
![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)

- Limpeza de dados, análise exploratória (EDA) e machine learning
- Clustering com k-Means e engenharia de features
- Visualização de dados e dashboards interativos

**Idiomas:** português (nativo) e inglês (avançado, C1)

### 🌐 Contato

<div align="center">

[![Portfólio](https://img.shields.io/badge/Portf%C3%B3lio-gustavolopesai.github.io-000000?style=for-the-badge&logo=githubpages&logoColor=white)](https://gustavolopesai.github.io)
[![GitHub](https://img.shields.io/badge/GitHub-gustavolopesAI-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/gustavolopesAI)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Gustavo%20Lopes%20Silva-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/gustavo-lopes-silva-londrina)
[![Lattes](https://img.shields.io/badge/Curr%C3%ADculo-Lattes%20CNPq-2E7D32?style=for-the-badge)](http://lattes.cnpq.br/3442293046870208)
[![Email](https://img.shields.io/badge/Email-gustavolopessilva0608%40gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:gustavolopessilva0608@gmail.com)

</div>

---

<div align="center">

*Feito com ☕ e muitos `segmentation fault` durante a graduação na UEL.*

</div>

Projeto Integrador - FATEC Mogi Mirim "Arthur de Azevedo"    
============
Orientador: Márcio Sábino (Cálculo).                           
Linguagem: C/C++, Electron, JavaScript, Css, Nodejs                                            
Bibliotecas: stdio.h, stdlib.h, math.h, clearScreen.h                                            
Integrantes:
>Câue Guedes
>Leonardo Vinícius Silva | [Git](github.com/oleovinicius)   
>Maria Eduarda Melo     
>Rafael Binotti           

O Projeto Integrador é para projeto da Fatec para os alunos do primeiro e segundo semestre visando entregar conhecimento de todas as matérias.


# Contribuições

### Por onde começar?

**1.** Faça o _fork_ do projeto.

**2.** [Entenda o fluxo](#fluxo).

**3.** [Leia e pratique as boas práticas](#boas-pr%C3%A1ticas).

### Fluxo

Qualquer tipo de ajuda (seja ela grande ou pequena) é bem-vinda.

**1.** Faça referência ao repositório oficial após o _fork_

```
git remote add upstream https://github.com/oleovinicius/pi-calculadora.git
```

**2.** Antes de iniciar o processo de contribuição, crie uma **nova branch** para fazer suas alterações.

Alguns exemplos:

- Para adicionar arquivos na lista: `git checkout -b arquivo.tipo`
- Para erros: `git checkout -b arquivo.tipo`

> Use qualquer palavra coerente com a contribuição que está sendo feita.


**3.** Após realizar as alterações, faça um commit com uma mensagem do que foi feito. Exemplo:

```
git add --all
git commit -am ‘correção main.c’
git push origin branch(master)
```

**4.** Envie um _Pull Request_ com as alterações feitas, fazendo referência para o `master`.

Após o merge:

- Delete a branch utilizada:

```
git checkout master
git push origin : arquivo.tipo
git branch -D arquivo.tipo
```

- Atualize seu repositório com o repositório oficial:

```
git fetch upstream
git rebase upstream/master
git push -f origin master
```

**6.** Em uma nova contribuição inicie repita o processo pelo passo 2.

### Boas práticas

- Antes de enviar sua contribuição se certifique de que está enviando apenas um **único** commit que represente o que foi feito;
- Sempre Estude o Git em caso de dúvidas;
- Evite Bad Smells.

Obrigado! :grin:

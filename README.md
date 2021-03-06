# Bitcoin Transaction System App


### Briefing

This program is a part of a semester excercise that my Data Structures and Algorithms [professor](https://www.lix.polytechnique.fr/~kostas/) assigned us to do.

-	The program is supposed to imitate a bitcoin transaction system, in which every bitcoin has a unique ID and starting value and owner.
-	The bitcoins are implemented as storage for an imaginary coin, that we count in single units.
-	Each bitcoins is implemented by a tree that keeps track of the current bitcoin owner and the history of the transactions that took place.
-	In each one of the trees the parent is the previous possessor of the amount of money. His right child represents the receiver of the amount and the left child the sender (
	the parent) and the amount left from the transaction.
-	All of the bitcoin trees are stored in a hash-table.

-	Then, we have a hashtable for the wallets of each user (which are consisted by lists of pointers to the leafs of the proper BitcoinTrees), where the current amount of
money, the ID and other useful stuff are stored.
-	We have two more hash-tables to store the sender and receiver transaction history. This are just pointers to the 
proper internal nodes of the BitcoinTrees that took part for the transactions.
-	Last but not least, the BitcoinApp can print the bitcoin history and the transaction that each user was sender or receiver, as well as the current owners of the transaction.

-	The "Transfer " function will be used to get the transaction system to work since it will create the proper nodes in the Bitcoin Trees and then it will adjust properly the receiver's
and sender's wallets.

---

## Requirements

We need to install *gcc* and *make* in order to run this programm

So open a terminal CTRL + ALT + T and type:
```shell
~$ sudo apt update && sudo apt upgrade
~$ sudo apt install gcc make
```

---

## Install

```shell
~$ git clone https://github.com/VissaMoutafis/BitcoinApp
~$ cd BitcoinApp
~$ make
```
or for direct install and run
```shell
~$ make run
```

---

## Clean/Uninstall

```shell
~$ make clean
```

---

## Contributors
[VissaMoutafis](https://github.com/VissaMoutafis)

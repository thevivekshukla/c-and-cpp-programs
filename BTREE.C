#include <stdio.h>
#include <stdlib.h>

struct tree
	{
	int n;
	struct tree *r, *l;
	};

void insert(struct node *r)
	{
	struct node *p;
	int x;
	p = (struct tree*)malloc(sizeof(node tree));
	printf("\nEnter the value of node to be insert:\t");
	scanf("%d",&x);
	p -> n = x;
	p -> l = p -> r = NULL;

	}

void trav()
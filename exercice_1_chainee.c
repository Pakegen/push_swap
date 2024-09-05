/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercice_1_chainee.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:45:01 by quenalla          #+#    #+#             */
/*   Updated: 2024/09/05 17:03:02 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

struct cellule{
	int		entier;
	struct	cellule * suivant;
};

int main(void)
{
	struct cellule *p, *q, *tete=NULL;
	int i,n;
	printf("Donner le nombre d'element de la liste;\n");
	scanf("%d",&n);
	printf("Donner les elements de la liste:\n");
	for (i = 0;i < n; i++)
	{
		p = (struct cellule *)malloc(sizeof (struct cellule));
		scanf("%d", &((*p).entier));
		if (i == 0)
			tete=p;
		else
			(*q).suivant=p;
		q=p;
	}
	(*q).suivant=NULL;
	printf("Les elements de la liste:\n");
	q=tete;
	while(q != NULL)
	{
		printf("%d", (*q).entier);
		q=(*q).suivant;
	}
	printf("\n");
	system("pause");
	return 0;
}

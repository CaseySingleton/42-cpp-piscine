/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:04:36 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/19 21:04:37 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "KoalaSteroid.hpp"
#include "AsteroKreog.hpp"

int				main(void)
{
	MiningBarge barge1;
	MiningBarge barge2;
	DeepCoreMiner * coreMiner = new DeepCoreMiner();
	StripMiner * stripMiner = new StripMiner();
	KoalaSteroid * koala = new KoalaSteroid();
	AsteroKreog * kreog = new AsteroKreog();

	
	barge1.equip(coreMiner);
	barge1.equip(stripMiner);
	barge1.equip(coreMiner);
	barge1.equip(stripMiner);
	barge1.equip(stripMiner);
	barge1.mine(koala);
	barge1.mine(kreog);
	barge2 = barge1;
	barge2.equip(coreMiner);
	barge2.mine(koala);
	barge2.mine(kreog);
	return (0);
}

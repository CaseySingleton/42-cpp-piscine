/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RamModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 20:52:03 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/07/28 22:55:28 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMMODULE_H
#define RAMMODULE_H

#include <curses.h>
#include <inttypes.h>
#include "IMonitorModule.hpp"
#include "TerminalDisplay.hpp"
#include "Ram.hpp"

class RamModule : public IMonitorModule
{
	private:
	Ram _ram;
	ramInfo_t _ramInfo;

	public:
	RamModule();
	RamModule(const RamModule & src);
	~RamModule();

	void update();
	void draw(const TerminalDisplay *t, int x, int y, int width, int height) const;
	IMonitorModule *clone() const;

	RamModule & operator=(const RamModule & src);
};

#endif

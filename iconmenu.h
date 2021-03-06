// aewm++ - A small C++ window manager developed from aewm 0.9.6 around 2000 
// Frank Hale <frankhale@gmail.com>
//
// aewm++ can be found here: https://github.com/frankhale/aewmpp
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 3
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// Date: 30 May 2010

#ifndef _ICONMENU_H_
#define _ICONMENU_H_

#include "aewm.h"

class IconMenu : public GenericMenu
{
private:
	Client *client;

public:
	IconMenu(Display * dpy);

	virtual void handleButtonReleaseEvent(XButtonEvent *e);

	void setThisClient(Client *c) { client = c; }

	void addThisClient(Client *c);
	void removeClientFromIconMenu(Client *c);
	void updateClientName(Client *c);
};

#endif 

/*
 * buttons.h 
 *
 * Created:  Mon Feb  2 00:10:01 2015
 * Author: Georg von Zengen <oni303@gmail.com>
 * 		   Keno Garlichs <k.garlichs@tu-braunschweig.de>
 */ 

#pragma once

extern void (*plus_callback)(void);
extern void (*minus_callback)(void);
extern void (*third_callback)(void);
extern void (*third_long_callback)(void);

void buttons_init(void (*p_callback)(void), void (*m_callback)(void), void (*t_callback)(void), void (*tl_callback)(void));

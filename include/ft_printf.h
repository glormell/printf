/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 21:37:49 by srolland          #+#    #+#             */
/*   Updated: 2019/03/03 21:33:52 by srolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wchar.h>
# include <limits.h>
# include <stdint.h>
# define DABS(x) (((x) < 0.0f) ? (-x) : (x))

typedef enum		e_mod
{
	nomod = 0,
	h = 1,
	hh = 2,
	l = 3,
	ll = 4,
	z = 5,
	j = 6,
	t = 7,
	L = 8
}					t_mod;

union				u_vivon
{
	unsigned long long	l;
	double				d;
}					u;

/*
** 0 = NONE 1 = HASH 2 = ZERO 4 = MINUS 8 = PLUS 16 = SPACE 32 = NEG FLOAT
*/
typedef struct		s_xren
{
	int				aster;
	int				flags;
	int				prec;
	unsigned int	width;
	int				a_width;
	size_t			len;
	char			type;
	t_mod			mod;
	int				err;
	char			flal;
	void			*value;
}					t_xren;

int					ft_printf(const char *format, ...);
int					just_starting_some_shit(const char *format, va_list args);
int					handle_float(t_xren x, va_list args);
int					double_prep(t_xren *x, int num_len);
int					whos_next(int a, int b);

/*
** 		Blink-182
**		What's My Age Again?
*/

int					i_took_her_out(const char *format, size_t *i, int *last);
int					it_was_a_friday_night(const char *format, size_t len,
		int last, va_list args);
int					i_wore_cologne(const char c);
int					to_get_the_feeling_right(const char c);
int					we_started_making_out(const char c);
int					and_she_took_off_my_pants(const char c);
int					but_then_i_turned_on_the_tv(const char c);

int					and_thats_about_the_time(t_xren x, va_list args);
t_xren				she_walked_away_from_me(const char *format, size_t len,
		va_list args);
int					nobody_likes_you(const char *format, size_t len);
int					when_youre_23(t_xren *x, const char *format, size_t *i);
int					and_are_still_amused(t_xren *x, const char *format,
		size_t *i, va_list args);
int					by_the_tv_show(t_xren *x, const char *format, size_t *i,
		va_list args);
int					what_the_hell_is_add(t_xren *x, const char *format,
		size_t *i, va_list args);
int					my_friends_say(t_xren *x, const char *format, size_t *i,
		va_list args);
int					i_should_act_my_age(t_xren *x, const char *format,
		size_t *i, va_list args);
/*
** 					What's my age again?
**					What's my age again?
*/
int					then_later_on(t_xren x, va_list args);
int					on_the_drive_home(t_xren x, va_list args);
int					i_called_her_mom(t_xren x, va_list args);
int					from_a_pay_phone(t_xren x, const char *str, size_t len,
		int wadu_hek);
/*
**               	I said I was the cops
*/
int					and_your_husbands_in_jail(const char c, int len);
/*
** 					this state looks down on sodomy
**
**					And that's about the time
**					that bitch hung up on me
**					nobody likes you when you're 23
**					and you still more amused
**					by prank phone calls
*/
int					what_the_hell_is_call_id(t_xren x, va_list args);
/*
** 					My friends tell I should act my age
**					What's my age again?
**					What's my age again?
**
**					And that's about the time
**					She walked away from me
**					nobody likes you when you're 23
**					And you still act like you're in freshman year
**					What the hell is wrong with me?
**					My friends tell I should act my age
**					What's my age again?
**					What's my age again?
**
**					That's about the time that she broke up with me
**					No one should take themselves so seriously
**					With many years ahead to in line
**					Why would you wish that on me?
**					I never wanna act my age
**					What's my age again?
**					What's my age again?
**					What's my age again?
*/
void				ft_bzero(void *s, size_t n);
int					ft_atoi(const char *s, int a_neg, int *rt, size_t *i);
int					ft_isdigit(const char c);
void				*ft_memmalloc(size_t size);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *s, const size_t max);
char				*ft_itoa_base(intmax_t n, t_xren x, char sign, int base);
char				*ft_uitoa_base(uintmax_t n, unsigned int base,
		const char *digits, size_t prec);
int					ft_ldtoa(t_xren x, long double num,
		int int_len, int tot_len);

#endif

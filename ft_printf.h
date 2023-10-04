/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:19:43 by czheng            #+#    #+#             */
/*   Updated: 2023/09/23 16:19:54 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int		ft_strchk(const char *str, char c);
int		ft_asgn(const char c, va_list *args);
int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
void	ft_putint(long n, int *count);
void	ft_putptr(uintptr_t n, int *count);
void	ft_puthex(unsigned long n, const char *str, int *count);

#endif

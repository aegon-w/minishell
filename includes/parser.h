/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:46:14 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/07/05 19:50:11 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

int		parser(t_list *cmds);
int		check_parse_error(t_list *cmds);
void	count_tokens(t_command *cmd);
void	collect_files_and_delimiters(t_command *cmd);
#endif
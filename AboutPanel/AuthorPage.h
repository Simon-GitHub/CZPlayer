/***************************************************************************
 *   Copyright (C) 2012-2015 Highway-9 Studio.                             *
 *   787280310@qq.com									                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   CUIT Highway-9 Studio, China.									       *
 ***************************************************************************/

/*!
 * \file   AuthorPage.h
 * \author chengxuan   787280310@qq.com
 * \date   2014-12-22
 * \brief  ����ҳ��ͷ�ļ���
 * \version 3.0.0
 *
 * \verbatim
 * ��ʷ
 *          3.0.0   ����,
 *          2014-12-22    by chengxuan
 *
 * \endverbatim
 *
 */

#ifndef AUTHORPAGE_H
#define AUTHORPAGE_H

/*! \def AUTHORPAGE_VERSION
 *  �汾���ƺ꣬��Ӧv3.0.0�汾.
 */
#define AUTHORPAGE_VERSION   0x030000

#include <QWidget>

class QLabel;

/*! ����ҳ��
 */
class AuthorPage : public QWidget
{
	Q_OBJECT

public:
	/*! ���캯��
	 *  \param parent ������ָ�룬Ĭ��ΪNULL
     */
	AuthorPage(QWidget *parent = NULL);

	/*! ��������.*/
	~AuthorPage(void);

private:
	QLabel *m_mainAuthorLabel;		/*!< ���Ŀ���*/
	QLabel *m_plugAuthorLabel;		/*!< �������*/
	QLabel *m_artAuthorLabel;		/*!< ����*/
};

#endif //AUTHORPAGE_H

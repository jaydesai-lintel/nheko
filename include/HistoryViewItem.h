/*
 * nheko Copyright (C) 2017  Konstantinos Sideris <siderisk@auth.gr>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HISTORY_VIEW_ITEM_H
#define HISTORY_VIEW_ITEM_H

#include <QHBoxLayout>
#include <QLabel>
#include <QWidget>

#include "Sync.h"

class HistoryViewItem : public QWidget
{
	Q_OBJECT
public:
	HistoryViewItem(const Event &event, bool with_sender, const QString &color, QWidget *parent = 0);
	~HistoryViewItem();

private:
	QHBoxLayout *top_layout_;

	QLabel *time_label_;
	QLabel *content_label_;
};

#endif  // HISTORY_VIEW_ITEM_H

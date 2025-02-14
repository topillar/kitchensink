/**********************************************************************
*
* Copyright (c) 2012-2019 Barbara Geller
* Copyright (C) 2015 The Qt Company Ltd.
*
* You may use this file under the terms of the 2-Clause BSD license
* provided with KitchenSink or available at:
*
* https://opensource.org/licenses/BSD-2-Clause
*
* KitchenSink is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
***********************************************************************/

#ifndef INTERNATIONAL_H
#define INTERNATIONAL_H

#include "ui_international.h"

#include <QWidget>

class QStringListModel;
class QTranslator;

class International : public QWidget
{
   CS_OBJECT(International)

   public:
      International();
      ~International();

   private:
      void retranslateUi();
      void changeEvent(QEvent *event);
      void getListData();

      Ui::International *ui;
      QStringListModel *m_model;
      static QTranslator *m_translator;

      // slot declarations
      void actionEnglish();
      void actionFrench();
      void actionGerman();
      void actionClose();
};

#endif

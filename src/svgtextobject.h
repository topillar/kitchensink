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

#ifndef SVGTEXTOBJECT_H
#define SVGTEXTOBJECT_H

#include <QTextFormat>
#include <QTextObjectInterface>

class SvgTextObject : public QObject, public QTextObjectInterface
{
   CS_OBJECT(SvgTextObject)
   CS_INTERFACES(QTextObjectInterface)

   public:
      QSizeF intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format);
      void drawObject(QPainter *painter, const QRectF &rect,
                  QTextDocument *doc, int posInDocument, const QTextFormat &format);
};

#endif

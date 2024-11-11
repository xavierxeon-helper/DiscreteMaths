#ifndef DiscreteMathsVertexH
#define DiscreteMathsVertexH

#include <QList>

namespace DiscreteMaths
{
   class Vertex
   {
   public:
      using PrtList = QList<Vertex*>;
      using ConstPtrList = QList<const Vertex*>;

   public:
      Vertex(const QString& name = QString());

   public:
      const QString& getName() const;

   protected:
      QString name;
   };
} // namespace DiscreteMaths

#endif // NOT GraphAbstractVertexH

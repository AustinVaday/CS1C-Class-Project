/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.4.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

  // /Users/syndacit/git/Class-Project/MainProgram/ActivatedListFile.txt
  
  
    // /Users/syndacit/git/Class-Project/MainProgram/DeactivatedListFile.txt
  
  
  
static const unsigned char qt_resource_data[484] = { 'Q', 'R', 'C', '_', 'D', 'A', 'T', 'A' };

static const unsigned char qt_resource_name[] = {
  // ActivatedListFile.txt
  0x0,0x15,
  0x2,0x79,0x1d,0xd4,
  0x0,0x41,
  0x0,0x63,0x0,0x74,0x0,0x69,0x0,0x76,0x0,0x61,0x0,0x74,0x0,0x65,0x0,0x64,0x0,0x4c,0x0,0x69,0x0,0x73,0x0,0x74,0x0,0x46,0x0,0x69,0x0,0x6c,0x0,0x65,
  0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
    // DeactivatedListFile.txt
  0x0,0x17,
  0x4,0x22,0x9d,0xd4,
  0x0,0x44,
  0x0,0x65,0x0,0x61,0x0,0x63,0x0,0x74,0x0,0x69,0x0,0x76,0x0,0x61,0x0,0x74,0x0,0x65,0x0,0x64,0x0,0x4c,0x0,0x69,0x0,0x73,0x0,0x74,0x0,0x46,0x0,0x69,
  0x0,0x6c,0x0,0x65,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,
  // :/ActivatedListFile.txt
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
  // :/DeactivatedListFile.txt
  0x0,0x0,0x0,0x30,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xec,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_TextFilesFolder)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_TextFilesFolder)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_TextFilesFolder)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_TextFilesFolder)(); }
   } dummy;
}

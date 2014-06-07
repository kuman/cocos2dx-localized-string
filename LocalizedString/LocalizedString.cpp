#include "LocalizedString.h"

using namespace std;

LocalizedString::LocalizedString() {
}

LocalizedString::~LocalizedString() {
}

__String* LocalizedString::localizedString(const char *key){

    const char* fileName = getSystemLang();

    __String* str;

    string fname = fileName;
    fname = fname + "/Localized.plist";

    __Dictionary* language = __Dictionary::createWithContentsOfFile(fname.c_str());

    str = (__String *) language->objectForKey(key);

    if (str == NULL) {
        str = __String::create(key);
    }

    return str;
}

const char* LocalizedString::getSystemLang()
{
    LanguageType curLanguage = Application::getInstance()->getCurrentLanguage();

    switch (curLanguage) {
        case LanguageType::ENGLISH:
            return "en.lproj";
            break;
        case LanguageType::JAPANESE:
            return "ja.lproj";
        default:
            return "en.lproj";
            break;
    }
}

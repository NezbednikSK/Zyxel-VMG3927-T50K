#!/usr/bin/env python
# -*- coding: utf-8 -*-

#
# Generated  by generateDS.py version 2.7b.
#

import sys
import getopt
import re as re_

etree_ = None
Verbose_import_ = False
(   XMLParser_import_none, XMLParser_import_lxml,
    XMLParser_import_elementtree
    ) = range(3)
XMLParser_import_library = None
try:
    # lxml
    from lxml import etree as etree_
    XMLParser_import_library = XMLParser_import_lxml
    if Verbose_import_:
        print("running with lxml.etree")
except ImportError:
    try:
        # cElementTree from Python 2.5+
        import xml.etree.cElementTree as etree_
        XMLParser_import_library = XMLParser_import_elementtree
        if Verbose_import_:
            print("running with cElementTree on Python 2.5+")
    except ImportError:
        try:
            # ElementTree from Python 2.5+
            import xml.etree.ElementTree as etree_
            XMLParser_import_library = XMLParser_import_elementtree
            if Verbose_import_:
                print("running with ElementTree on Python 2.5+")
        except ImportError:
            try:
                # normal cElementTree install
                import cElementTree as etree_
                XMLParser_import_library = XMLParser_import_elementtree
                if Verbose_import_:
                    print("running with cElementTree")
            except ImportError:
                try:
                    # normal ElementTree install
                    import elementtree.ElementTree as etree_
                    XMLParser_import_library = XMLParser_import_elementtree
                    if Verbose_import_:
                        print("running with ElementTree")
                except ImportError:
                    raise ImportError("Failed to import ElementTree from any known place")

def parsexml_(*args, **kwargs):
    if (XMLParser_import_library == XMLParser_import_lxml and
        'parser' not in kwargs):
        # Use the lxml ElementTree compatible parser so that, e.g.,
        #   we ignore comments.
        kwargs['parser'] = etree_.ETCompatXMLParser()
    doc = etree_.parse(*args, **kwargs)
    return doc

#
# User methods
#
# Calls to the methods in these classes are generated by generateDS.py.
# You can replace these methods by re-implementing the following class
#   in a module named generatedssuper.py.

try:
    from generatedssuper import GeneratedsSuper
except ImportError, exp:

    class GeneratedsSuper(object):
        def gds_format_string(self, input_data, input_name=''):
            return input_data
        def gds_validate_string(self, input_data, node, input_name=''):
            return input_data
        def gds_format_integer(self, input_data, input_name=''):
            return '%d' % input_data
        def gds_validate_integer(self, input_data, node, input_name=''):
            return input_data
        def gds_format_integer_list(self, input_data, input_name=''):
            return '%s' % input_data
        def gds_validate_integer_list(self, input_data, node, input_name=''):
            values = input_data.split()
            for value in values:
                try:
                    fvalue = float(value)
                except (TypeError, ValueError), exp:
                    raise_parse_error(node, 'Requires sequence of integers')
            return input_data
        def gds_format_float(self, input_data, input_name=''):
            return '%f' % input_data
        def gds_validate_float(self, input_data, node, input_name=''):
            return input_data
        def gds_format_float_list(self, input_data, input_name=''):
            return '%s' % input_data
        def gds_validate_float_list(self, input_data, node, input_name=''):
            values = input_data.split()
            for value in values:
                try:
                    fvalue = float(value)
                except (TypeError, ValueError), exp:
                    raise_parse_error(node, 'Requires sequence of floats')
            return input_data
        def gds_format_double(self, input_data, input_name=''):
            return '%e' % input_data
        def gds_validate_double(self, input_data, node, input_name=''):
            return input_data
        def gds_format_double_list(self, input_data, input_name=''):
            return '%s' % input_data
        def gds_validate_double_list(self, input_data, node, input_name=''):
            values = input_data.split()
            for value in values:
                try:
                    fvalue = float(value)
                except (TypeError, ValueError), exp:
                    raise_parse_error(node, 'Requires sequence of doubles')
            return input_data
        def gds_format_boolean(self, input_data, input_name=''):
            return '%s' % input_data
        def gds_validate_boolean(self, input_data, node, input_name=''):
            return input_data
        def gds_format_boolean_list(self, input_data, input_name=''):
            return '%s' % input_data
        def gds_validate_boolean_list(self, input_data, node, input_name=''):
            values = input_data.split()
            for value in values:
                if value not in ('true', '1', 'false', '0', ):
                    raise_parse_error(node, 'Requires sequence of booleans ("true", "1", "false", "0")')
            return input_data
        def gds_str_lower(self, instring):
            return instring.lower()
        def get_path_(self, node):
            path_list = []
            self.get_path_list_(node, path_list)
            path_list.reverse()
            path = '/'.join(path_list)
            return path
        Tag_strip_pattern_ = re_.compile(r'\{.*\}')
        def get_path_list_(self, node, path_list):
            if node is None:
                return
            tag = GeneratedsSuper.Tag_strip_pattern_.sub('', node.tag)
            if tag:
                path_list.append(tag)
            self.get_path_list_(node.getparent(), path_list)
        def get_class_obj_(self, node, default_class=None):
            class_obj1 = default_class
            if 'xsi' in node.nsmap:
                classname = node.get('{%s}type' % node.nsmap['xsi'])
                if classname is not None:
                    names = classname.split(':')
                    if len(names) == 2:
                        classname = names[1]
                    class_obj2 = globals().get(classname)
                    if class_obj2 is not None:
                        class_obj1 = class_obj2
            return class_obj1
        def gds_build_any(self, node, type_name=None):
            return None


#
# If you have installed IPython you can uncomment and use the following.
# IPython is available from http://ipython.scipy.org/.
#

## from IPython.Shell import IPShellEmbed
## args = ''
## ipshell = IPShellEmbed(args,
##     banner = 'Dropping into IPython',
##     exit_msg = 'Leaving Interpreter, back to program.')

# Then use the following line where and when you want to drop into the
# IPython shell:
#    ipshell('<some message> -- Entering ipshell.\nHit Ctrl-D to exit')

#
# Globals
#

ExternalEncoding = 'ascii'
Tag_pattern_ = re_.compile(r'({.*})?(.*)')
String_cleanup_pat_ = re_.compile(r"[\n\r\s]+")
Namespace_extract_pat_ = re_.compile(r'{(.*)}(.*)')

#
# Support/utility functions.
#

def showIndent(outfile, level):
    for idx in range(level):
        outfile.write('    ')

def quote_xml(inStr):
    if not inStr:
        return ''
    s1 = (isinstance(inStr, basestring) and inStr or
          '%s' % inStr)
    s1 = s1.replace('&', '&amp;')
    s1 = s1.replace('<', '&lt;')
    s1 = s1.replace('>', '&gt;')
    return s1

def quote_attrib(inStr):
    s1 = (isinstance(inStr, basestring) and inStr or
          '%s' % inStr)
    s1 = s1.replace('&', '&amp;')
    s1 = s1.replace('<', '&lt;')
    s1 = s1.replace('>', '&gt;')
    if '"' in s1:
        if "'" in s1:
            s1 = '"%s"' % s1.replace('"', "&quot;")
        else:
            s1 = "'%s'" % s1
    else:
        s1 = '"%s"' % s1
    return s1

def quote_python(inStr):
    s1 = inStr
    if s1.find("'") == -1:
        if s1.find('\n') == -1:
            return "'%s'" % s1
        else:
            return "'''%s'''" % s1
    else:
        if s1.find('"') != -1:
            s1 = s1.replace('"', '\\"')
        if s1.find('\n') == -1:
            return '"%s"' % s1
        else:
            return '"""%s"""' % s1

def get_all_text_(node):
    if node.text is not None:
        text = node.text
    else:
        text = ''
    for child in node:
        if child.tail is not None:
            text += child.tail
    return text

def find_attr_value_(attr_name, node):
    attrs = node.attrib
    attr_parts = attr_name.split(':')
    value = None
    if len(attr_parts) == 1:
        value = attrs.get(attr_name)
    elif len(attr_parts) == 2:
        prefix, name = attr_parts
        namespace = node.nsmap.get(prefix)
        if namespace is not None:
            value = attrs.get('{%s}%s' % (namespace, name, ))
    return value


class GDSParseError(Exception):
    pass

def raise_parse_error(node, msg):
    if XMLParser_import_library == XMLParser_import_lxml:
        msg = '%s (element %s/line %d)' % (msg, node.tag, node.sourceline, )
    else:
        msg = '%s (element %s)' % (msg, node.tag, )
    raise GDSParseError(msg)


class MixedContainer:
    # Constants for category:
    CategoryNone = 0
    CategoryText = 1
    CategorySimple = 2
    CategoryComplex = 3
    # Constants for content_type:
    TypeNone = 0
    TypeText = 1
    TypeString = 2
    TypeInteger = 3
    TypeFloat = 4
    TypeDecimal = 5
    TypeDouble = 6
    TypeBoolean = 7
    def __init__(self, category, content_type, name, value):
        self.category = category
        self.content_type = content_type
        self.name = name
        self.value = value
    def getCategory(self):
        return self.category
    def getContenttype(self, content_type):
        return self.content_type
    def getValue(self):
        return self.value
    def getName(self):
        return self.name
    def export(self, outfile, level, name, namespace):
        if self.category == MixedContainer.CategoryText:
            # Prevent exporting empty content as empty lines.
            if self.value.strip():
                outfile.write(self.value)
        elif self.category == MixedContainer.CategorySimple:
            self.exportSimple(outfile, level, name)
        else:    # category == MixedContainer.CategoryComplex
            self.value.export(outfile, level, namespace,name)
    def exportSimple(self, outfile, level, name):
        if self.content_type == MixedContainer.TypeString:
            outfile.write('<%s>%s</%s>' % (self.name, self.value, self.name))
        elif self.content_type == MixedContainer.TypeInteger or \
                self.content_type == MixedContainer.TypeBoolean:
            outfile.write('<%s>%d</%s>' % (self.name, self.value, self.name))
        elif self.content_type == MixedContainer.TypeFloat or \
                self.content_type == MixedContainer.TypeDecimal:
            outfile.write('<%s>%f</%s>' % (self.name, self.value, self.name))
        elif self.content_type == MixedContainer.TypeDouble:
            outfile.write('<%s>%g</%s>' % (self.name, self.value, self.name))
    def exportLiteral(self, outfile, level, name):
        if self.category == MixedContainer.CategoryText:
            showIndent(outfile, level)
            outfile.write('model_.MixedContainer(%d, %d, "%s", "%s"),\n' % \
                (self.category, self.content_type, self.name, self.value))
        elif self.category == MixedContainer.CategorySimple:
            showIndent(outfile, level)
            outfile.write('model_.MixedContainer(%d, %d, "%s", "%s"),\n' % \
                (self.category, self.content_type, self.name, self.value))
        else:    # category == MixedContainer.CategoryComplex
            showIndent(outfile, level)
            outfile.write('model_.MixedContainer(%d, %d, "%s",\n' % \
                (self.category, self.content_type, self.name,))
            self.value.exportLiteral(outfile, level + 1)
            showIndent(outfile, level)
            outfile.write(')\n')


class MemberSpec_(object):
    def __init__(self, name='', data_type='', container=0):
        self.name = name
        self.data_type = data_type
        self.container = container
    def set_name(self, name): self.name = name
    def get_name(self): return self.name
    def set_data_type(self, data_type): self.data_type = data_type
    def get_data_type_chain(self): return self.data_type
    def get_data_type(self):
        if isinstance(self.data_type, list):
            if len(self.data_type) > 0:
                return self.data_type[-1]
            else:
                return 'xs:string'
        else:
            return self.data_type
    def set_container(self, container): self.container = container
    def get_container(self): return self.container

def _cast(typ, value):
    if typ is None or value is None:
        return value
    return typ(value)

#
# Data representation classes.
#

class keyprovision(GeneratedsSuper):
    subclass = None
    superclass = None
    def __init__(self, metadata=None, secdat=None, module=None):
        self.metadata = metadata
        self.secdat = secdat
        self.module = module
    def factory(*args_, **kwargs_):
        if keyprovision.subclass:
            return keyprovision.subclass(*args_, **kwargs_)
        else:
            return keyprovision(*args_, **kwargs_)
    factory = staticmethod(factory)
    def get_metadata(self): return self.metadata
    def set_metadata(self, metadata): self.metadata = metadata
    def get_secdat(self): return self.secdat
    def set_secdat(self, secdat): self.secdat = secdat
    def get_module(self): return self.module
    def set_module(self, module): self.module = module
    def export(self, outfile, level, namespace_='tns:', name_='keyprovision', namespacedef_=''):
        showIndent(outfile, level)
        outfile.write('<%s%s%s' % (namespace_, name_, namespacedef_ and ' ' + namespacedef_ or '', ))
        already_processed = []
        self.exportAttributes(outfile, level, already_processed, namespace_, name_='keyprovision')
        if self.hasContent_():
            outfile.write('>\n')
            self.exportChildren(outfile, level + 1, namespace_, name_)
            showIndent(outfile, level)
            outfile.write('</%s%s>\n' % (namespace_, name_))
        else:
            outfile.write('/>\n')
    def exportAttributes(self, outfile, level, already_processed, namespace_='tns:', name_='keyprovision'):
        pass
    def exportChildren(self, outfile, level, namespace_='tns:', name_='keyprovision', fromsubclass_=False):
        if self.metadata is not None:
            self.metadata.export(outfile, level, namespace_, name_='metadata', )
        if self.secdat is not None:
            self.secdat.export(outfile, level, namespace_, name_='secdat', )
        if self.module is not None:
            self.module.export(outfile, level, namespace_, name_='module', )
    def hasContent_(self):
        if (
            self.metadata is not None or
            self.secdat is not None or
            self.module is not None
            ):
            return True
        else:
            return False
    def exportLiteral(self, outfile, level, name_='keyprovision'):
        level += 1
        self.exportLiteralAttributes(outfile, level, [], name_)
        if self.hasContent_():
            self.exportLiteralChildren(outfile, level, name_)
    def exportLiteralAttributes(self, outfile, level, already_processed, name_):
        pass
    def exportLiteralChildren(self, outfile, level, name_):
        if self.metadata is not None:
            showIndent(outfile, level)
            outfile.write('metadata=model_.metadata(\n')
            self.metadata.exportLiteral(outfile, level)
            showIndent(outfile, level)
            outfile.write('),\n')
        if self.secdat is not None:
            showIndent(outfile, level)
            outfile.write('secdat=model_.secdat(\n')
            self.secdat.exportLiteral(outfile, level)
            showIndent(outfile, level)
            outfile.write('),\n')
        if self.module is not None:
            showIndent(outfile, level)
            outfile.write('module=model_.module(\n')
            self.module.exportLiteral(outfile, level)
            showIndent(outfile, level)
            outfile.write('),\n')
    def build(self, node):
        self.buildAttributes(node, node.attrib, [])
        for child in node:
            nodeName_ = Tag_pattern_.match(child.tag).groups()[-1]
            self.buildChildren(child, node, nodeName_)
    def buildAttributes(self, node, attrs, already_processed):
        pass
    def buildChildren(self, child_, node, nodeName_, fromsubclass_=False):
        if nodeName_ == 'metadata':
            obj_ = metadata.factory()
            obj_.build(child_)
            self.set_metadata(obj_)
        elif nodeName_ == 'secdat':
            obj_ = secdat.factory()
            obj_.build(child_)
            self.set_secdat(obj_)
        elif nodeName_ == 'module':
            obj_ = module.factory()
            obj_.build(child_)
            self.set_module(obj_)
# end class keyprovision


class metadata(GeneratedsSuper):
    subclass = None
    superclass = None
    def __init__(self, chipset=None, version=None):
        self.chipset = chipset
        self.version = version
    def factory(*args_, **kwargs_):
        if metadata.subclass:
            return metadata.subclass(*args_, **kwargs_)
        else:
            return metadata(*args_, **kwargs_)
    factory = staticmethod(factory)
    def get_chipset(self): return self.chipset
    def set_chipset(self, chipset): self.chipset = chipset
    def get_version(self): return self.version
    def set_version(self, version): self.version = version
    def export(self, outfile, level, namespace_='tns:', name_='metadata', namespacedef_=''):
        showIndent(outfile, level)
        outfile.write('<%s%s%s' % (namespace_, name_, namespacedef_ and ' ' + namespacedef_ or '', ))
        already_processed = []
        self.exportAttributes(outfile, level, already_processed, namespace_, name_='metadata')
        if self.hasContent_():
            outfile.write('>\n')
            self.exportChildren(outfile, level + 1, namespace_, name_)
            showIndent(outfile, level)
            outfile.write('</%s%s>\n' % (namespace_, name_))
        else:
            outfile.write('/>\n')
    def exportAttributes(self, outfile, level, already_processed, namespace_='tns:', name_='metadata'):
        pass
    def exportChildren(self, outfile, level, namespace_='tns:', name_='metadata', fromsubclass_=False):
        if self.chipset is not None:
            showIndent(outfile, level)
            outfile.write('<%schipset>%s</%schipset>\n' % (namespace_, self.gds_format_string(quote_xml(self.chipset).encode(ExternalEncoding), input_name='chipset'), namespace_))
        if self.version is not None:
            showIndent(outfile, level)
            outfile.write('<%sversion>%s</%sversion>\n' % (namespace_, self.gds_format_string(quote_xml(self.version).encode(ExternalEncoding), input_name='version'), namespace_))
    def hasContent_(self):
        if (
            self.chipset is not None or
            self.version is not None
            ):
            return True
        else:
            return False
    def exportLiteral(self, outfile, level, name_='metadata'):
        level += 1
        self.exportLiteralAttributes(outfile, level, [], name_)
        if self.hasContent_():
            self.exportLiteralChildren(outfile, level, name_)
    def exportLiteralAttributes(self, outfile, level, already_processed, name_):
        pass
    def exportLiteralChildren(self, outfile, level, name_):
        if self.chipset is not None:
            showIndent(outfile, level)
            outfile.write('chipset=%s,\n' % quote_python(self.chipset).encode(ExternalEncoding))
        if self.version is not None:
            showIndent(outfile, level)
            outfile.write('version=%s,\n' % quote_python(self.version).encode(ExternalEncoding))
    def build(self, node):
        self.buildAttributes(node, node.attrib, [])
        for child in node:
            nodeName_ = Tag_pattern_.match(child.tag).groups()[-1]
            self.buildChildren(child, node, nodeName_)
    def buildAttributes(self, node, attrs, already_processed):
        pass
    def buildChildren(self, child_, node, nodeName_, fromsubclass_=False):
        if nodeName_ == 'chipset':
            chipset_ = child_.text
            chipset_ = self.gds_validate_string(chipset_, node, 'chipset')
            self.chipset = chipset_
        elif nodeName_ == 'version':
            version_ = child_.text
            version_ = self.gds_validate_string(version_, node, 'version')
            self.version = version_
# end class metadata


class secdat(GeneratedsSuper):
    subclass = None
    superclass = None
    def __init__(self, file_info=None, file_version=None, fuse_version=None):
        self.file_info = file_info
        self.file_version = file_version
        self.fuse_version = fuse_version
    def factory(*args_, **kwargs_):
        if secdat.subclass:
            return secdat.subclass(*args_, **kwargs_)
        else:
            return secdat(*args_, **kwargs_)
    factory = staticmethod(factory)
    def get_file_info(self): return self.file_info
    def set_file_info(self, file_info): self.file_info = file_info
    def get_file_version(self): return self.file_version
    def set_file_version(self, file_version): self.file_version = file_version
    def get_fuse_version(self): return self.fuse_version
    def set_fuse_version(self, fuse_version): self.fuse_version = fuse_version
    def export(self, outfile, level, namespace_='tns:', name_='secdat', namespacedef_=''):
        showIndent(outfile, level)
        outfile.write('<%s%s%s' % (namespace_, name_, namespacedef_ and ' ' + namespacedef_ or '', ))
        already_processed = []
        self.exportAttributes(outfile, level, already_processed, namespace_, name_='secdat')
        if self.hasContent_():
            outfile.write('>\n')
            self.exportChildren(outfile, level + 1, namespace_, name_)
            showIndent(outfile, level)
            outfile.write('</%s%s>\n' % (namespace_, name_))
        else:
            outfile.write('/>\n')
    def exportAttributes(self, outfile, level, already_processed, namespace_='tns:', name_='secdat'):
        pass
    def exportChildren(self, outfile, level, namespace_='tns:', name_='secdat', fromsubclass_=False):
        if self.file_info is not None:
            showIndent(outfile, level)
            outfile.write('<%sfile_info>%s</%sfile_info>\n' % (namespace_, self.gds_format_string(quote_xml(self.file_info).encode(ExternalEncoding), input_name='file_info'), namespace_))
        if self.file_version is not None:
            showIndent(outfile, level)
            outfile.write('<%sfile_version>%s</%sfile_version>\n' % (namespace_, self.gds_format_integer(self.file_version, input_name='file_version'), namespace_))
        if self.fuse_version is not None:
            showIndent(outfile, level)
            outfile.write('<%sfuse_version>%s</%sfuse_version>\n' % (namespace_, self.gds_format_integer(self.fuse_version, input_name='fuse_version'), namespace_))
    def hasContent_(self):
        if (
            self.file_info is not None or
            self.file_version is not None or
            self.fuse_version is not None
            ):
            return True
        else:
            return False
    def exportLiteral(self, outfile, level, name_='secdat'):
        level += 1
        self.exportLiteralAttributes(outfile, level, [], name_)
        if self.hasContent_():
            self.exportLiteralChildren(outfile, level, name_)
    def exportLiteralAttributes(self, outfile, level, already_processed, name_):
        pass
    def exportLiteralChildren(self, outfile, level, name_):
        if self.file_info is not None:
            showIndent(outfile, level)
            outfile.write('file_info=%s,\n' % quote_python(self.file_info).encode(ExternalEncoding))
        if self.file_version is not None:
            showIndent(outfile, level)
            outfile.write('file_version=%d,\n' % self.file_version)
        if self.fuse_version is not None:
            showIndent(outfile, level)
            outfile.write('fuse_version=%d,\n' % self.fuse_version)
    def build(self, node):
        self.buildAttributes(node, node.attrib, [])
        for child in node:
            nodeName_ = Tag_pattern_.match(child.tag).groups()[-1]
            self.buildChildren(child, node, nodeName_)
    def buildAttributes(self, node, attrs, already_processed):
        pass
    def buildChildren(self, child_, node, nodeName_, fromsubclass_=False):
        if nodeName_ == 'file_info':
            file_info_ = child_.text
            file_info_ = self.gds_validate_string(file_info_, node, 'file_info')
            self.file_info = file_info_
        elif nodeName_ == 'file_version':
            sval_ = child_.text
            try:
                ival_ = int(sval_)
            except (TypeError, ValueError), exp:
                raise_parse_error(child_, 'requires integer: %s' % exp)
            ival_ = self.gds_validate_integer(ival_, node, 'file_version')
            self.file_version = ival_
        elif nodeName_ == 'fuse_version':
            sval_ = child_.text
            try:
                ival_ = int(sval_)
            except (TypeError, ValueError), exp:
                raise_parse_error(child_, 'requires integer: %s' % exp)
            ival_ = self.gds_validate_integer(ival_, node, 'fuse_version')
            self.fuse_version = ival_
# end class secdat


class module(GeneratedsSuper):
    subclass = None
    superclass = None
    def __init__(self, id=None, entry=None):
        self.id = _cast(None, id)
        if entry is None:
            self.entry = []
        else:
            self.entry = entry
    def factory(*args_, **kwargs_):
        if module.subclass:
            return module.subclass(*args_, **kwargs_)
        else:
            return module(*args_, **kwargs_)
    factory = staticmethod(factory)
    def get_entry(self): return self.entry
    def set_entry(self, entry): self.entry = entry
    def add_entry(self, value): self.entry.append(value)
    def insert_entry(self, index, value): self.entry[index] = value
    def get_id(self): return self.id
    def set_id(self, id): self.id = id
    def export(self, outfile, level, namespace_='tns:', name_='module', namespacedef_=''):
        showIndent(outfile, level)
        outfile.write('<%s%s%s' % (namespace_, name_, namespacedef_ and ' ' + namespacedef_ or '', ))
        already_processed = []
        self.exportAttributes(outfile, level, already_processed, namespace_, name_='module')
        if self.hasContent_():
            outfile.write('>\n')
            self.exportChildren(outfile, level + 1, namespace_, name_)
            showIndent(outfile, level)
            outfile.write('</%s%s>\n' % (namespace_, name_))
        else:
            outfile.write('/>\n')
    def exportAttributes(self, outfile, level, already_processed, namespace_='tns:', name_='module'):
        if self.id is not None and 'id' not in already_processed:
            already_processed.append('id')
            outfile.write(' id=%s' % (self.gds_format_string(quote_attrib(self.id).encode(ExternalEncoding), input_name='id'), ))
    def exportChildren(self, outfile, level, namespace_='tns:', name_='module', fromsubclass_=False):
        for entry_ in self.entry:
            entry_.export(outfile, level, namespace_, name_='entry')
    def hasContent_(self):
        if (
            self.entry
            ):
            return True
        else:
            return False
    def exportLiteral(self, outfile, level, name_='module'):
        level += 1
        self.exportLiteralAttributes(outfile, level, [], name_)
        if self.hasContent_():
            self.exportLiteralChildren(outfile, level, name_)
    def exportLiteralAttributes(self, outfile, level, already_processed, name_):
        if self.id is not None and 'id' not in already_processed:
            already_processed.append('id')
            showIndent(outfile, level)
            outfile.write('id = "%s",\n' % (self.id,))
    def exportLiteralChildren(self, outfile, level, name_):
        showIndent(outfile, level)
        outfile.write('entry=[\n')
        level += 1
        for entry_ in self.entry:
            showIndent(outfile, level)
            outfile.write('model_.entry(\n')
            entry_.exportLiteral(outfile, level)
            showIndent(outfile, level)
            outfile.write('),\n')
        level -= 1
        showIndent(outfile, level)
        outfile.write('],\n')
    def build(self, node):
        self.buildAttributes(node, node.attrib, [])
        for child in node:
            nodeName_ = Tag_pattern_.match(child.tag).groups()[-1]
            self.buildChildren(child, node, nodeName_)
    def buildAttributes(self, node, attrs, already_processed):
        value = find_attr_value_('id', node)
        if value is not None and 'id' not in already_processed:
            already_processed.append('id')
            self.id = value
    def buildChildren(self, child_, node, nodeName_, fromsubclass_=False):
        if nodeName_ == 'entry':
            obj_ = entry.factory()
            obj_.build(child_)
            self.entry.append(obj_)
# end class module


class entry(GeneratedsSuper):
    subclass = None
    superclass = None
    def __init__(self, ignore=None, description=None, name=None, value=None):
        self.ignore = _cast(None, ignore)
        self.description = description
        self.name = name
        self.value = value
    def factory(*args_, **kwargs_):
        if entry.subclass:
            return entry.subclass(*args_, **kwargs_)
        else:
            return entry(*args_, **kwargs_)
    factory = staticmethod(factory)
    def get_description(self): return self.description
    def set_description(self, description): self.description = description
    def get_name(self): return self.name
    def set_name(self, name): self.name = name
    def get_value(self): return self.value
    def set_value(self, value): self.value = value
    def get_ignore(self): return self.ignore
    def set_ignore(self, ignore): self.ignore = ignore
    def export(self, outfile, level, namespace_='tns:', name_='entry', namespacedef_=''):
        showIndent(outfile, level)
        outfile.write('<%s%s%s' % (namespace_, name_, namespacedef_ and ' ' + namespacedef_ or '', ))
        already_processed = []
        self.exportAttributes(outfile, level, already_processed, namespace_, name_='entry')
        if self.hasContent_():
            outfile.write('>\n')
            self.exportChildren(outfile, level + 1, namespace_, name_)
            showIndent(outfile, level)
            outfile.write('</%s%s>\n' % (namespace_, name_))
        else:
            outfile.write('/>\n')
    def exportAttributes(self, outfile, level, already_processed, namespace_='tns:', name_='entry'):
        if self.ignore is not None and 'ignore' not in already_processed:
            already_processed.append('ignore')
            outfile.write(' ignore=%s' % (self.gds_format_string(quote_attrib(self.ignore).encode(ExternalEncoding), input_name='ignore'), ))
    def exportChildren(self, outfile, level, namespace_='tns:', name_='entry', fromsubclass_=False):
        if self.description is not None:
            showIndent(outfile, level)
            outfile.write('<%sdescription>%s</%sdescription>\n' % (namespace_, self.gds_format_string(quote_xml(self.description).encode(ExternalEncoding), input_name='description'), namespace_))
        if self.name is not None:
            showIndent(outfile, level)
            outfile.write('<%sname>%s</%sname>\n' % (namespace_, self.gds_format_string(quote_xml(self.name).encode(ExternalEncoding), input_name='name'), namespace_))
        if self.value is not None:
            showIndent(outfile, level)
            outfile.write('<%svalue>%s</%svalue>\n' % (namespace_, self.gds_format_string(quote_xml(self.value).encode(ExternalEncoding), input_name='value'), namespace_))
    def hasContent_(self):
        if (
            self.description is not None or
            self.name is not None or
            self.value is not None
            ):
            return True
        else:
            return False
    def exportLiteral(self, outfile, level, name_='entry'):
        level += 1
        self.exportLiteralAttributes(outfile, level, [], name_)
        if self.hasContent_():
            self.exportLiteralChildren(outfile, level, name_)
    def exportLiteralAttributes(self, outfile, level, already_processed, name_):
        if self.ignore is not None and 'ignore' not in already_processed:
            already_processed.append('ignore')
            showIndent(outfile, level)
            outfile.write('ignore = "%s",\n' % (self.ignore,))
    def exportLiteralChildren(self, outfile, level, name_):
        if self.description is not None:
            showIndent(outfile, level)
            outfile.write('description=%s,\n' % quote_python(self.description).encode(ExternalEncoding))
        if self.name is not None:
            showIndent(outfile, level)
            outfile.write('name=%s,\n' % quote_python(self.name).encode(ExternalEncoding))
        if self.value is not None:
            showIndent(outfile, level)
            outfile.write('value=%s,\n' % quote_python(self.value).encode(ExternalEncoding))
    def build(self, node):
        self.buildAttributes(node, node.attrib, [])
        for child in node:
            nodeName_ = Tag_pattern_.match(child.tag).groups()[-1]
            self.buildChildren(child, node, nodeName_)
    def buildAttributes(self, node, attrs, already_processed):
        value = find_attr_value_('ignore', node)
        if value is not None and 'ignore' not in already_processed:
            already_processed.append('ignore')
            self.ignore = value
    def buildChildren(self, child_, node, nodeName_, fromsubclass_=False):
        if nodeName_ == 'description':
            description_ = child_.text
            description_ = self.gds_validate_string(description_, node, 'description')
            self.description = description_
        elif nodeName_ == 'name':
            name_ = child_.text
            name_ = self.gds_validate_string(name_, node, 'name')
            self.name = name_
        elif nodeName_ == 'value':
            value_ = child_.text
            value_ = self.gds_validate_string(value_, node, 'value')
            self.value = value_
# end class entry


USAGE_TEXT = """
Usage: python <Parser>.py [ -s ] <in_xml_file>
"""

def usage():
    print USAGE_TEXT
    sys.exit(1)


def get_root_tag(node):
    tag = Tag_pattern_.match(node.tag).groups()[-1]
    rootClass = globals().get(tag)
    return tag, rootClass


def parse(inFileName):
    doc = parsexml_(inFileName)
    rootNode = doc.getroot()
    rootTag, rootClass = get_root_tag(rootNode)
    if rootClass is None:
        rootTag = 'keyprovision'
        rootClass = keyprovision
    rootObj = rootClass.factory()
    rootObj.build(rootNode)
    # Enable Python to collect the space used by the DOM.
    doc = None
    sys.stdout.write('<?xml version="1.0" ?>\n')
    rootObj.export(sys.stdout, 0, name_=rootTag,
        namespacedef_='xmlns:tns="http://www.qualcomm.com/keyprovision"')
    return rootObj


def parseString(inString):
    from StringIO import StringIO
    doc = parsexml_(StringIO(inString))
    rootNode = doc.getroot()
    rootTag, rootClass = get_root_tag(rootNode)
    if rootClass is None:
        rootTag = 'keyprovision'
        rootClass = keyprovision
    rootObj = rootClass.factory()
    rootObj.build(rootNode)
    # Enable Python to collect the space used by the DOM.
    doc = None
    sys.stdout.write('<?xml version="1.0" ?>\n')
    rootObj.export(sys.stdout, 0, name_="keyprovision",
        namespacedef_='xmlns:tns="http://www.qualcomm.com/keyprovision"')
    return rootObj


def parseLiteral(inFileName):
    doc = parsexml_(inFileName)
    rootNode = doc.getroot()
    rootTag, rootClass = get_root_tag(rootNode)
    if rootClass is None:
        rootTag = 'keyprovision'
        rootClass = keyprovision
    rootObj = rootClass.factory()
    rootObj.build(rootNode)
    # Enable Python to collect the space used by the DOM.
    doc = None
    sys.stdout.write('#from auto_gen_fb_user_config import *\n\n')
    sys.stdout.write('import auto_gen_fb_user_config as model_\n\n')
    sys.stdout.write('rootObj = model_.rootTag(\n')
    rootObj.exportLiteral(sys.stdout, 0, name_=rootTag)
    sys.stdout.write(')\n')
    return rootObj


def main():
    args = sys.argv[1:]
    if len(args) == 1:
        parse(args[0])
    else:
        usage()


if __name__ == '__main__':
    #import pdb; pdb.set_trace()
    main()


__all__ = [
    "entry",
    "keyprovision",
    "metadata",
    "module",
    "secdat"
    ]

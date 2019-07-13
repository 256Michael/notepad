project('notepad', 'cpp')
qt5 = import('qt5')
qt5_deps = dependency('qt5', modules:['Core', 'Widgets', 'PrintSupport'])
inc = include_directories('src')

moc_files = qt5.preprocess(
            moc_headers: ['src/editmenu.hpp', 'src/findbar.hpp', 'src/licenceviewer.hpp', 'src/notepadapp.hpp', 'src/setsmenu.hpp', 'src/tabwidget.hpp',
                          'src/filemenu.hpp',  'src/helpmenu.hpp',  'src/mainwindow.hpp', 'src/notepadtab.hpp', 'src/tabbar.hpp'],
    include_directories: inc,
           dependencies: qt5_deps
)

translations = qt5.compile_translations(
            ts_files: ['translations/notepad_pl.ts', 'translations/notepad_eo.ts'],
             install: true,
         install_dir: 'share/notepad/translations',
    build_by_default: true
)
executable(
                         'notepad',
                         ['src/editmenu.cpp', 'src/findbar.cpp', 'src/licenceviewer.cpp', 'src/mainwindow.cpp', 'src/notepadtab.cpp', 'src/tabbar.cpp',
                          'src/filemenu.cpp', 'src/helpmenu.cpp', 'src/main.cpp', 'src/notepadapp.cpp', 'src/setsmenu.cpp', 'src/tabwidget.cpp'],
                         moc_files,
    include_directories: inc,
           dependencies: qt5_deps,
                install: true,
)
install_data('LICENSE')
install_data('notepad.desktop', install_dir: 'share/applications')
install_data('notepad.svg', rename: 'accessories-text-editor.svg', install_dir: 'share/icons/hicolor/scalable/apps')

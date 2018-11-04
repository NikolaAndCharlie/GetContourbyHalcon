#include "main_widget.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>
#include <QHBoxLayout>
#include <QBoxLayout>
#include <QFormLayout>

MainWidget::MainWidget()
           : m_file_path(" ")
{

	setUI();
}

MainWidget::~MainWidget()
{

}

void MainWidget::getFilePath()
{
	m_file_path = QFileDialog::getOpenFileName(this,tr("get file open name"),"",tr("file (*.dfm *.shm)"));
	m_get_file_path_line_edit->setText(m_file_path);
}

void MainWidget::setUI()
{
		QHBoxLayout *main_layout = new QHBoxLayout;
		QVBoxLayout *right_layout = new QVBoxLayout;
		QFormLayout* line_button_layout = new QFormLayout;

    m_get_file_path_line_edit = new QLineEdit;
		m_load_file_button = new QPushButton("load file");

		m_load_image_button = new QPushButton(tr("load image"));
		m_load_image_line_edit = new QLineEdit;

		m_set_contrast_line_edit = new QLineEdit;
		m_show_contour_button = new QPushButton(tr("show"));

		m_refresh_button = new QPushButton(tr("refresh"));
		m_save_file_button = new QPushButton("save file");


		line_button_layout->addRow(m_get_file_path_line_edit, m_load_file_button);
		line_button_layout->addRow(m_load_image_line_edit, m_load_image_button);
		QHBoxLayout *button_h_layout = new QHBoxLayout;
		button_h_layout->addWidget(m_set_contrast_line_edit);
		button_h_layout->addWidget(m_show_contour_button);
		button_h_layout->addWidget(m_refresh_button);
		button_h_layout->addWidget(m_save_file_button);

		m_save_file_line_edit  = new QLineEdit;
		
		right_layout->addLayout(line_button_layout);
		right_layout->addLayout(button_h_layout);
		right_layout->addWidget(m_save_file_line_edit);
		right_layout->addStretch();
	
	  m_image_view = new ImageView;

		main_layout->addWidget(m_image_view,8);
		main_layout->addLayout(right_layout,2);
		

		this->setLayout(main_layout);
		this->setMinimumSize(800,600);
		
}

void MainWidget::setConnect()
{
	connect(m_load_file_button, &QPushButton::clicked, this, &MainWidget::getFilePath);
}

void MainWidget::getContoursPoints()
{

}

void MainWidget::showContoursPoints()
{

}

void MainWidget::saveNewModel()
{
	QString save_file_path = QFileDialog::getOpenFileName(this, tr("save file"), "", tr("model file(*.dfm *.shm)"));
	m_inspect->saveNewModelFile(save_file_path);
}
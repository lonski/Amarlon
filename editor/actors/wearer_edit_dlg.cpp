#include "wearer_edit_dlg.h"
#include "ui_wearer_edit_dlg.h"
#include <QInputDialog>
#include <enum_mappings.h>

WearerEditDlg::WearerEditDlg(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::WearerEditDlg),
  _wearer(nullptr)
{
  ui->setupUi(this);
}

WearerEditDlg::~WearerEditDlg()
{
  delete ui;
}

void WearerEditDlg::setWearer(amarlon::WearerData *wearer)
{
  _wearer = wearer;
  fillForm();
}

void WearerEditDlg::on_buttonBox_accepted()
{
  fillWearer();
}

void WearerEditDlg::fillWearer()
{

}

void WearerEditDlg::fillForm()
{
  if ( _wearer )
  {
    ui->sTable->clear();
    ui->sTable->setRowCount(0);
    ui->sTable->setColumnCount(2);
    ui->sTable->setHorizontalHeaderItem(0,new QTableWidgetItem("ID"));
    ui->sTable->setHorizontalHeaderItem(1,new QTableWidgetItem("Item ID"));

//XXX    for( int i=0; i < _wearer->itemslots_size(); ++i )
//    {
//      const auto& slot = _wearer->itemslots(i);

//      ui->sTable->insertRow( ui->sTable->rowCount() );
//      ui->sTable->setItem(ui->sTable->rowCount() - 1, 0, new QTableWidgetItem( item_slots.at(slot.id()) ));
//      ui->sTable->setItem(ui->sTable->rowCount() - 1, 1, new QTableWidgetItem( QString::number(slot.item()) ));
//    }
  }
}


void WearerEditDlg::on_btnAdd_clicked()
{
  if ( _wearer )
  {
    //_slotEdit.setSlot( _wearer->add_itemslots() );
    //_slotEdit.exec();
    fillForm();
  }
}

void WearerEditDlg::on_btnEdit_clicked()
{
  if ( _wearer )
  {
    auto* item = ui->sTable->item( ui->sTable->currentRow(), 0);
    if ( item )
    {
      int id = item->text().toInt();
//      for( int i=0; i < _wearer->itemslots_size(); ++i )
//      {
//        const auto& slot = _wearer->itemslots(i);
//        if ( slot.id() == id )
//        {
//          //_slotEdit.setSlot( _wearer->mutable_itemslots(i) );
//          //_slotEdit.exec();
//          fillForm();
//        }
//      } XXX
    }
  }
}

void WearerEditDlg::on_btnDelete_clicked()
{
  if ( _wearer )
  {
    auto* item = ui->sTable->item( ui->sTable->currentRow(), 0);
    if ( item )
    {
      int id = item->text().toInt();
//      for( auto it = _wearer->itemslots().begin(); it != _wearer->itemslots().end(); ++it )
//      {
//        if ( it->id() == id )
//        {
//          _wearer->mutable_itemslots()->erase(it);
//          fillForm();
//          break;
//        }
//      } XXX
    }
  }
}

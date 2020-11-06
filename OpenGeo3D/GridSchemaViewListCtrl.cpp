#include "GridSchemaViewListCtrl.h"
#include "Strings.h"

GridSchemaViewListCtrl::GridSchemaViewListCtrl(wxWindow* parent) : wxDataViewListCtrl(parent, wxID_ANY) {
	AppendTextColumn(Strings::LabelOfNo(), wxDATAVIEW_CELL_INERT, 20);
	AppendTextColumn(Strings::LabelOfName(), wxDATAVIEW_CELL_INERT, 100);
	AppendTextColumn(Strings::LabelOfFieldValueType(), wxDATAVIEW_CELL_INERT, 100);
	AppendTextColumn(Strings::LabelOfDescription(), wxDATAVIEW_CELL_INERT, 80);
}

GridSchemaViewListCtrl::~GridSchemaViewListCtrl() {

}
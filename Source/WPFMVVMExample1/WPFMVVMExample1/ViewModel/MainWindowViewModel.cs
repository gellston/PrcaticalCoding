﻿using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;
using WPFMVVMExample1.Command;
using WPFMVVMExample1.Model;

namespace WPFMVVMExample1.ViewModel
{
    public class MainWindowViewModel : ViewModelBase
    {


        #region Private Property
        private ObservableCollection<TextFileModel> _TextFileModelCollection = new ObservableCollection<TextFileModel>();
        #endregion


        #region Constructor
        public MainWindowViewModel() {




            this.TextFileModelCollection.Add(new TextFileModel()
            {
                FileName = "test.txt",
                FilePath = "c://test.txt"
            });

            this.TextFileModelCollection.Add(new TextFileModel()
            {
                FileName = "test.txt",
                FilePath = "c://test.txt"
            });

            this.TextFileModelCollection.Add(new TextFileModel()
            {
                FileName = "test.txt",
                FilePath = "c://test.txt"
            });

        }
        #endregion


        #region Public Property

        #endregion


        #region Collection
        public ObservableCollection<TextFileModel> TextFileModelCollection
        {
            get => _TextFileModelCollection;
            set
            {
                _TextFileModelCollection = value;
                OnPropertyChanged("TextFileModelCollection");
            }
        }
        #endregion

    }
}

namespace WindowsFormsApplication1
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.СрокВклада = new System.Windows.Forms.Label();
            this.ПроцСтавка = new System.Windows.Forms.Label();
            this.СуммаВклада = new System.Windows.Forms.Label();
            this.ВалютаВклада = new System.Windows.Forms.Label();
            this.Капитализация = new System.Windows.Forms.Label();
            this.Value = new System.Windows.Forms.ComboBox();
            this.Итог = new System.Windows.Forms.Label();
            this.Capital = new System.Windows.Forms.ComboBox();
            this.SumDepos = new System.Windows.Forms.TextBox();
            this.Period = new System.Windows.Forms.TextBox();
            this.Percent = new System.Windows.Forms.TextBox();
            this.Result = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.toolTip1 = new System.Windows.Forms.ToolTip(this.components);
            this.toolTip2 = new System.Windows.Forms.ToolTip(this.components);
            this.toolTip3 = new System.Windows.Forms.ToolTip(this.components);
            this.toolTip4 = new System.Windows.Forms.ToolTip(this.components);
            this.SuspendLayout();
            // 
            // СрокВклада
            // 
            this.СрокВклада.AutoSize = true;
            this.СрокВклада.Location = new System.Drawing.Point(30, 126);
            this.СрокВклада.Name = "СрокВклада";
            this.СрокВклада.Size = new System.Drawing.Size(127, 13);
            this.СрокВклада.TabIndex = 1;
            this.СрокВклада.Text = "Срок вклада, месяцев: ";
            this.toolTip1.SetToolTip(this.СрокВклада, "1,5 года = 18 месяцев, 2 года = 24 месяца, 5 лет = 60 месяцев\r\n");
            // 
            // ПроцСтавка
            // 
            this.ПроцСтавка.AutoSize = true;
            this.ПроцСтавка.Location = new System.Drawing.Point(30, 178);
            this.ПроцСтавка.Name = "ПроцСтавка";
            this.ПроцСтавка.Size = new System.Drawing.Size(221, 13);
            this.ПроцСтавка.TabIndex = 2;
            this.ПроцСтавка.Text = "Процентная ставка по вкладу, % годовых:";
            // 
            // СуммаВклада
            // 
            this.СуммаВклада.AutoSize = true;
            this.СуммаВклада.Location = new System.Drawing.Point(30, 20);
            this.СуммаВклада.Name = "СуммаВклада";
            this.СуммаВклада.Size = new System.Drawing.Size(83, 13);
            this.СуммаВклада.TabIndex = 3;
            this.СуммаВклада.Text = "Сумма вклада:";
            // 
            // ВалютаВклада
            // 
            this.ВалютаВклада.AutoSize = true;
            this.ВалютаВклада.Location = new System.Drawing.Point(31, 74);
            this.ВалютаВклада.Name = "ВалютаВклада";
            this.ВалютаВклада.Size = new System.Drawing.Size(87, 13);
            this.ВалютаВклада.TabIndex = 4;
            this.ВалютаВклада.Text = "Валюта вклада:";
            // 
            // Капитализация
            // 
            this.Капитализация.AutoSize = true;
            this.Капитализация.Location = new System.Drawing.Point(30, 228);
            this.Капитализация.Name = "Капитализация";
            this.Капитализация.Size = new System.Drawing.Size(213, 13);
            this.Капитализация.TabIndex = 5;
            this.Капитализация.Text = "Начисление процентов (капитализация):";
            this.toolTip2.SetToolTip(this.Капитализация, "Если проценты изымаются сразу же после начисления, то выберите первый пункт: В ко" +
        "нце срока (без капитализации).");
            // 
            // Value
            // 
            this.Value.FormattingEnabled = true;
            this.Value.Items.AddRange(new object[] {
            "руб.",
            "$",
            "евро"});
            this.Value.Location = new System.Drawing.Point(34, 90);
            this.Value.Name = "Value";
            this.Value.Size = new System.Drawing.Size(79, 21);
            this.Value.TabIndex = 8;
            this.Value.Text = "руб.";
            // 
            // Итог
            // 
            this.Итог.AutoSize = true;
            this.Итог.Location = new System.Drawing.Point(33, 326);
            this.Итог.Name = "Итог";
            this.Итог.Size = new System.Drawing.Size(168, 13);
            this.Итог.TabIndex = 9;
            this.Итог.Text = "Итог по вкладу на конец срока:";
            this.Итог.Click += new System.EventHandler(this.label1_Click);
            // 
            // Capital
            // 
            this.Capital.FormattingEnabled = true;
            this.Capital.Items.AddRange(new object[] {
            "В конце срока(без капитализации)",
            "Ежемесячно",
            "1 раз в 2 месяца",
            "1 раз в 3 месяца",
            "1 раз в пол года"});
            this.Capital.Location = new System.Drawing.Point(33, 244);
            this.Capital.Name = "Capital";
            this.Capital.Size = new System.Drawing.Size(210, 21);
            this.Capital.TabIndex = 10;
            this.Capital.Text = "В конце срока(без капитализации)";
            // 
            // SumDepos
            // 
            this.SumDepos.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.SumDepos.Location = new System.Drawing.Point(34, 37);
            this.SumDepos.Name = "SumDepos";
            this.SumDepos.Size = new System.Drawing.Size(123, 20);
            this.SumDepos.TabIndex = 11;
            this.SumDepos.TextChanged += new System.EventHandler(this.SumDepos_TextChanged);
            // 
            // Period
            // 
            this.Period.Location = new System.Drawing.Point(33, 142);
            this.Period.Name = "Period";
            this.Period.Size = new System.Drawing.Size(125, 20);
            this.Period.TabIndex = 12;
            this.Period.TextChanged += new System.EventHandler(this.textBox2_TextChanged);
            // 
            // Percent
            // 
            this.Percent.Location = new System.Drawing.Point(33, 194);
            this.Percent.Name = "Percent";
            this.Percent.Size = new System.Drawing.Size(210, 20);
            this.Percent.TabIndex = 13;
            // 
            // Result
            // 
            this.Result.Location = new System.Drawing.Point(218, 319);
            this.Result.Name = "Result";
            this.Result.Size = new System.Drawing.Size(174, 20);
            this.Result.TabIndex = 16;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(33, 281);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(176, 22);
            this.button1.TabIndex = 17;
            this.button1.Text = "Посчитать";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(435, 365);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.Result);
            this.Controls.Add(this.Percent);
            this.Controls.Add(this.Period);
            this.Controls.Add(this.SumDepos);
            this.Controls.Add(this.Capital);
            this.Controls.Add(this.Итог);
            this.Controls.Add(this.Value);
            this.Controls.Add(this.Капитализация);
            this.Controls.Add(this.ВалютаВклада);
            this.Controls.Add(this.СуммаВклада);
            this.Controls.Add(this.ПроцСтавка);
            this.Controls.Add(this.СрокВклада);
            this.Name = "Form1";
            this.Text = "Банковский вклад";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label СрокВклада;
        private System.Windows.Forms.Label ПроцСтавка;
        private System.Windows.Forms.Label СуммаВклада;
        private System.Windows.Forms.Label ВалютаВклада;
        private System.Windows.Forms.Label Капитализация;
        private System.Windows.Forms.ComboBox Value;
        private System.Windows.Forms.Label Итог;
        private System.Windows.Forms.ComboBox Capital;
        private System.Windows.Forms.TextBox SumDepos;
        private System.Windows.Forms.TextBox Period;
        private System.Windows.Forms.TextBox Percent;
        private System.Windows.Forms.TextBox Result;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.ToolTip toolTip1;
        private System.Windows.Forms.ToolTip toolTip2;
        private System.Windows.Forms.ToolTip toolTip3;
        private System.Windows.Forms.ToolTip toolTip4;
    }
}


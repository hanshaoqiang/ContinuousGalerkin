#ifndef QUADRATURES_H
#define QUADRATURES_H


class quadratures
{
    public:
        /** Default constructor */
        quadratures();

        /** Access count
         * \return The current value of count
         */
        int Getcount() { return count; }
        /** Set count
         * \param val New value to set
         */
        void Setcount(int val) { count = val; }

    protected:
        int count; //!< Member variable "count"

    private:
};

#endif // QUADRATURES_H

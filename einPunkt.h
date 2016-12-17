#ifndef EINPUNKT_H
#define EINPUNKT_H


class einPunkt
{
    public:
        /** Default constructor */
        einPunkt(x,y);
        /** Default destructor */
        virtual ~einPunkt();
        /** Copy constructor
         *  \param other Object to copy from
         */
        einPunkt(const einPunkt& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        einPunkt& operator=(const einPunkt& other);
        /** Access x
         * \return The current value of x
         */
        float Getx() { return x; }
        /** Set x
         * \param val New value to set
         */
        void Setx(float val) { x = val; }
        /** Access y
         * \return The current value of y
         */
        float Gety() { return y; }
        /** Set y
         * \param val New value to set
         */
        void Sety(float val) { y = val; }
    protected:
    private:
        float x; //!< Member variable "x"
        float y; //!< Member variable "y"
};

#endif // EINPUNKT_H

import React from 'react';
import './bio.scss'

const Bio = ({text, children}) =>(
    <div className="bio">
        <h1 >{text}</h1>
        <h3>{children}</h3>
    </div>
)
export default Bio;
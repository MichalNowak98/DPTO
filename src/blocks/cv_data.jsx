import React from 'react';
import { Grid} from 'semantic-ui-react'

const Timeline = ({items}) =>(
    <div className="cv_d">
      <Grid>
          {
            items.map((item, index) => (
            <Grid.Row>
                <Grid.Column width={4}>
                    {item.title}
                </Grid.Column>
                <Grid.Column width={4}>
                    {item.description}
                </Grid.Column>
                <Grid.Column width={4}>
                    {item.from} 
                </Grid.Column>
                <Grid.Column width={4}>
                    {item.to}                    
                </Grid.Column>
            </Grid.Row>
            ))
          }
      </Grid>
    </div>
)
export default Timeline